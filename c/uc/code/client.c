//客户机线程
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/stat.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"socket.h"
#include"http.h"
#include"resource.h"
#include"client.h"

//线程过程函数
//CA* ca = malloc(sizeof(CA));
//pthread_create(&tid,NULL,client,ca);
void* client(void* arg){
    CA* ca = (CA*)arg;
    printf("%d.%ld > 客户机线程开始\n",getpid(),syscall(SYS_gettid));
    for(;;){
        printf("%d.%ld > 接收请求\n",getpid(),syscall(SYS_gettid));
        char* req = recvRequest(ca->conn);
        if(req == NULL){
            break;
        }
        printf("%d.%ld > 请求电文:\n%s\n",getpid(),syscall(SYS_gettid),req);

        printf("%d.%ld > 解析请求\n",getpid(),syscall(SYS_gettid));
        HTTP_REQUEST hreq = {};//用来存储解析得到的数据
        if(parseRequest(req,&hreq) == -1){
            free(req);//解析失败,释放存储请求的存储区
            break;
        }

        free(req);//解析成功,后续使用hreq即可,存储区释放
        
        //路径处理
        char root[PATH_MAX + 1];//资源路径 /home/tarena/project/home
        char path[PATH_MAX + 1];//真实路径 /home/tarena/project/home/c/io.html

        strcpy(root,ca->home);

        //去掉资源路径最后的 / 
        if(root[strlen(root) - 1] == '/' ){
            root[strlen(root) - 1] = '\0';
        }

        //拼接搞定真实路径
        strcpy(path,root);
        strcat(path,hreq.path);
        
        // /home/tarena/project/home/index.html
        // 如果请求中的路径是 /  ,表示对方要首页文件
        if(strcmp(hreq.path,"/") == 0){
            strcat(path,"index.html");
        }
        
        //构造相应头所需的数据
        HTTP_RESPOND hres = {"HTTP/1.1",200,"OK","text/html"};
        //搜索文件
        if(searchResource(path) == -1){
            hres.status = 404;
            strcpy(hres.desc,"NOT FOUND");
            // /home/tarena/project/home/404.html
            strcpy(path,root);
            strcat(path,"/404.html");
        }else if(identifyType(path,hres.type) == -1){//识别类型
            hres.status = 404;
            strcpy(hres.desc,"NOT FOUND");
            // /home/tarena/project/home/404.html
            strcpy(path,root);
            strcat(path,"/404.html");        
        }

        //获取响应文件大小
        struct stat s;//用来输出文件的元数据
        if(stat(path,&s) == -1){
            break;
        }
        hres.length = s.st_size;
        
        //连接状态
        //如果请求有连接状态的话,请求的连接状态是啥,响应的就是啥
        if(strlen(hreq.connection)){
            strcpy(hres.connection,hreq.connection);
        }else if(strcasecmp(hreq.protocol,"http/1.0") == 0){
            strcpy(hres.connection,"close");
        }else{
            strcpy(hres.connection,"keep-alive");
        }

        printf("%d.%ld > 构造响应\n",getpid(),syscall(SYS_gettid));
        char head[1024] = {};
        if(constructHead(&hres,head) == -1){
            break;
        }
        printf("%d.%ld > 响应电文:\n%s\n",getpid(),syscall(SYS_gettid),head);

        printf("%d.%ld > 发送响应头\n",getpid(),syscall(SYS_gettid));
        if(sendHead(ca->conn,head) == -1){
            break;
        }

        printf("%d.%ld > 发送响应体\n",getpid(),syscall(SYS_gettid));
        if(sendBody(ca->conn,path) == -1){
            break;
        }

        //如果连接状态是close,结束循环
        if(strcasecmp(hres.connection,"close") == 0){
            break;
        }
    }
    //关闭通信套接字
    close(ca->conn);
    free(ca);
    printf("%d.%ld > 客户机线程结束",getpid(),syscall(SYS_gettid));
    return NULL;
}











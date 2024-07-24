//通信模块实现
#include<unistd.h>
#include<fcntl.h>
#include<sys/syscall.h>
#include<sys/stat.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"socket.h"

static int sockfd = -1;

//初始化套接字
int initSocket(short port){
    //创建套接字
    printf("%d.%ld > 创建套接字\n",getpid(),syscall(SYS_gettid));
    sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(sockfd == -1){
        perror("socket");
        return -1;
    }
    printf("%d.%ld > 设置套接字\n",getpid(),syscall(SYS_gettid));
    //服务器重启时,可能会因为上次运行的套接字还未释放,导致此次套接字
    //绑定端口失败,所以需要设置套接字,保证重启正常
    int on = 1;
    if(setsockopt(sockfd,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on)) == -1){
        perror("setsockopt");
        return -1;
    }
    //组织地址结构
    printf("%d.%ld > 组织地址结构\n",getpid(),syscall(SYS_gettid));
    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(port);
    ser.sin_addr.s_addr = INADDR_ANY;//无论哪个IP地址到来的数据,都接
    //绑定
    printf("%d.%ld > 绑定套接字\n",getpid(),syscall(SYS_gettid));
    if(bind(sockfd,(struct sockaddr*)&ser,sizeof(ser)) == -1){
        perror("bind");
        return -1;
    }
    //侦听
    printf("%d.%ld > 启动侦听\n",getpid(),syscall(SYS_gettid));
    if(listen(sockfd,1024) == -1){
        perror("listen");
        return -1;
    }
    return 0;
}

//接收客户端的连接请求
int acceptClient(void){
    printf("%d.%ld > 等待客户端的连接\n",getpid(),syscall(SYS_gettid));
    struct sockaddr_in cli;//用来输出客户端的地址结构
    socklen_t len = sizeof(cli);//输出地址结构大小
    int conn = accept(sockfd,(struct sockaddr*)&cli,&len);
    if(conn == -1){
        perror("accept");
        return -1;
    }
    printf("%d.%ld > 已接收到%s.%hu的客户端的连接\n",getpid(),
            syscall(SYS_gettid),inet_ntoa(cli.sin_addr),ntohs(cli.sin_port));
    return conn;
}
//接收http请求
char* recvRequest(int conn){
    ssize_t len = 0;//已接收的总字节数
    char* req = NULL;//记录存储区地址
    for(;;){
        char buf[1024] = {};
        ssize_t size = recv(conn,buf,sizeof(buf)-1,0);
        if(size == -1){
            free(req);
            perror("recv");
            return NULL;
        }
        if(size == 0){
            printf("%d.%ld > 客户端关闭套接字\n",getpid(),syscall(SYS_gettid));
            free(req);
            return NULL;
        }
        //修改存储区大小
        req = realloc(req,len + size + 1);
        //拷贝数据
        memcpy(req+len,buf,size+1);
        //长度累加
        len = len + size;
        //如果内容包含\r\n\r\n,则意味着接收完全
        if(strstr(req,"\r\n\r\n")){
            break;
        }
    }
    return req;
}

//发送响应头
int sendHead(int conn,const char* head){
    if(send(conn,head,strlen(head),0) == -1){
        perror("send");
        return -1;
    }
    return 0;
}

//发送响应体
int sendBody(int conn,const char* path){
    int fd = open(path,O_RDONLY);
    if(fd == -1){
        perror("open");
        return -1;
    }
    char buf[1024];
    ssize_t len;
    while((len = read(fd,buf,sizeof(buf)-1)) > 0){
        if(send(conn,buf,len,0) == -1){
            perror("send");
            close(fd);
            return -1;
        }
    } 
    // len ----> -1    len ----> 0
    if(len == -1){
        perror("read");
        close(fd);
        return -1;
    }
    close(fd);
    return 0;
}
//终结化套接字
void deinitSocket(void){
    close(sockfd);
}
















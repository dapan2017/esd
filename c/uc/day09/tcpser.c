//基于tcp协议的服务器
#include<stdio.h>
#include<string.h>
#include<ctype.h>// toupper()
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<errno.h>
//信号处理函数,负责收尸
void sigchild(int signum){
    while(1){
        pid_t pid = waitpid(-1,NULL,WNOHANG);
        if(pid == -1){
            if(errno == ECHILD){
                printf("没有子进程了\n");
                break;
            }else{
                perror("waitpid");
                return;
            }
        }else if(pid == 0){
            printf("子进程在运行\n");
            break;
        }else{
            printf("回收了%d进程的僵尸\n",pid);
        }    
    }
}
int main(void){
    //17号信号捕获处理
    if(signal(SIGCHLD,sigchild) == SIG_ERR){
        perror("signal");
        return -1;
    }

    printf("服务器:创建套接字\n");
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(sockfd == -1){
        perror("socket");
        return -1;
    }
    printf("服务器:组织地址结构\n");
    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(8980);//字节序
    ser.sin_addr.s_addr = inet_addr("192.168.249.129");
    printf("服务器:绑定套接字和地址结构\n");
    if(bind(sockfd,(struct sockaddr*)&ser,sizeof(ser)) == -1){
        perror("bind");
        return -1;
    }
    printf("服务器:启动侦听\n");
    if(listen(sockfd,1024) == -1){
        perror("listen");
        return -1;
    }
    
    for(;;){

        printf("服务器:等待客户端的连接\n");
        struct sockaddr_in cli;//用来输出客户端的地址结构
        socklen_t len = sizeof(cli);//用来输出地址结构大小
        int conn = accept(sockfd,(struct sockaddr*)&cli,&len);
        if(conn == -1){
            perror("accept");
            return -1;
        }
        printf("服务器:接收到%s:%hu的客户端的连接\n",
                inet_ntoa(cli.sin_addr),ntohs(cli.sin_port));
        printf("服务器:业务处理\n");
    
        //创建子进程,子进程负责和客户端通信
        pid_t pid = fork();
        if(pid == -1){
            perror("fork");
            return -1;
        }
        if(pid == 0){
            //关闭侦听套接字
            close(sockfd);
            for(;;){
                //接收客户端发来的小写的串
                char buf[64] = {};
                ssize_t size = read(conn,buf,sizeof(buf)-1);
                if(size == -1){
                    perror("read");
                    return -1;
                }
                if(size == 0){
                    //对方关闭套接字
                    break;
                }
                //转大写
                for(int i = 0;i < strlen(buf);i++){
                    buf[i] = toupper(buf[i]);
                }
                //回传给客户端
                if(write(conn,buf,strlen(buf)) == -1){
                    perror("write");
                    return -1;
                }
            }
            //通信结束,关闭通信套接字
            close(conn);
            return 0;
        }
        //父进程代码
        close(conn);
    }
    printf("服务器:关闭套接字\n");
    close(sockfd);

    return 0;
}










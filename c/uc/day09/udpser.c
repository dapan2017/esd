//基于udp的服务器
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>

int main(void){
    printf("服务器:创建套接字\n");
    int sockfd = socket(AF_INET,SOCK_DGRAM,0);
    if(sockfd == -1){
        perror("socket");
        return -1;
    }
    printf("服务器:组织地址结构\n");
    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(9090);
    ser.sin_addr.s_addr = inet_addr("192.168.249.129");

    printf("服务器:绑定套接字和地址结构\n");
    if(bind(sockfd,(struct sockaddr*)&ser,sizeof(ser)) == -1){
        perror("bind");
        return -1;
    }

    printf("服务器:业务处理\n");
    for(;;){
        //接收数据
        char buf[64] = {};
        struct sockaddr_in cli;//客户端地址结构
        socklen_t len = sizeof(cli);//地址结构大小
        if(recvfrom(sockfd,buf,sizeof(buf)-1,0,
                    (struct sockaddr*)&cli,&len) == -1){
            perror("recvfrom");
            return -1;
        }
        //转大写
        for(int i = 0;i < strlen(buf);i++){
            buf[i] = toupper(buf[i]);
        }
        //回传给客户端
        if(sendto(sockfd,buf,strlen(buf),0,
                (struct sockaddr*)&cli,len) == -1){
            perror("sendto");
            return -1;
        }
    }

    printf("服务器:关闭套接字\n");
    close(sockfd);
    return 0;
}










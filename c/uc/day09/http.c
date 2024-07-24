//http协议
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>

int main(void){
    //创建套接字
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(sockfd == -1){
        perror("socket");
        return -1;
    }
    //组织服务器地质结构
    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(80);
    ser.sin_addr.s_addr = inet_addr("110.242.68.4");
    //发起连接
    if(connect(sockfd,(struct sockaddr*)&ser,sizeof(ser)) == -1){
        perror("connect");
        return -1;
    }
    //发送请求
    char request[1024] = {};
    sprintf(request,"GET / HTTP/1.1\r\n"
                    "Host: www.baidu.com\r\n"
                    "Accept: */*\r\n"
                    "Connection: close\r\n\r\n");
    if(send(sockfd,request,strlen(request),0) == -1){
        perror("send");
        return -1;
    }
    //接收响应
    for(;;){
        char respond[1024] = {};
        ssize_t size = recv(sockfd,respond,sizeof(respond)-1,0);
        if(size == -1){
            perror("recv");
            return -1;
        }
        if(size == 0){
            break;
        }
        printf("%s",respond);
    }
    printf("\n");
    //关闭套接字
    close(sockfd);
    return 0;
}







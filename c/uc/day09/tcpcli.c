//基于tcp的客户端
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>

int main(void){
    printf("客户端:创建套接字\n");
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(sockfd == -1){
        perror("socket");
        return -1;
    }
    printf("客户端:组织服务器的地址结构\n");
    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(8980);
    ser.sin_addr.s_addr = inet_addr("192.168.249.129");
    printf("客户端:发起连接请求\n");
    if(connect(sockfd,(struct sockaddr*)&ser,sizeof(ser)) == -1){
        perror("connect");
        return -1;
    }
    printf("客户端:业务处理\n");
    for(;;){
        //通过键盘获取小写的串
        char buf[64] = {};
        fgets(buf,sizeof(buf),stdin);
        //! 退出
        if(strcmp(buf,"!\n") == 0){
            break;
        }
        //发给服务器
        if(send(sockfd,buf,strlen(buf),0) == -1){
            perror("send");
            return -1;
        }
        //接收回传的大写的串
        if(recv(sockfd,buf,sizeof(buf)-1,0) == -1){
            perror("recv");
            return -1;
        }
        //显示
        printf("%s",buf);
    }
    printf("客户端:关闭套接字\n");
    close(sockfd);

    return 0;
}







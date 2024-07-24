//通信模块头文件
#ifndef __SOCKET_H__
#define __SOCKET_H__
//初始化套接字
int initSocket(short port);
//接收客户端的连接请求
int acceptClient(void);
//接收http请求
char* recvRequest(int conn);
//发送响应头
int sendHead(int conn,const char* head);
//发送响应体
int sendBody(int conn,const char* path);
//终结化套接字
void deinitSocket(void);
#endif 

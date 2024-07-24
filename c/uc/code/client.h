//线程头文件
#ifndef __CLIENT_H__
#define __CLIENT_H__
//线程参数
typedef struct clientArgs{
    int conn;//通信套接字
    const char* home;//资源路径
}CA;

//线程过程函数,负责和客户端通信
void* client(void* arg);
#endif //__CLIENT_H__

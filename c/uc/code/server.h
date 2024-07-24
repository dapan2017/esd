//服务器模块头文件
#ifndef __SERVER_H__
#define __SERVER_H__
//初始化服务器
int initServer(short port);
//运行服务器
int runServer(const char* home);
//终结化服务器
void deinitServer(void);
#endif //__SERVER_H__

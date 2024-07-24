//http模块头文件
#ifndef __HTTP_H_
#define __HTTP_H_
#include<limits.h>
#include<sys/types.h>
//表示解析得到的关键数据
typedef struct httpRequest{
    char method[32];//请求方法
    char path[PATH_MAX + 1];//资源路径
    char protocol[32];//协议版本
    char connection[32];//连接状态
}HTTP_REQUEST;

//解析http请求
int parseRequest(const char* req,HTTP_REQUEST* hreq);

//表示构造响应所需要的参数
typedef struct httpRespond{
    char protocol[32];//协议版本
    int status;//状态码
    char desc[64];//状态描述
    char type[64];//类型
    off_t length;//长度
    char connection[32];//连接状态
}HTTP_RESPOND;

//构造http响应
int constructHead(const HTTP_RESPOND* hres,char* head);
#endif 







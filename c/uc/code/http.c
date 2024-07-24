//http模块实现
#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
#define __USE_GNU
#include<string.h>
#include<time.h>
#include"http.h"

//解析http请求
//HTTP_REQUEST r;
//parseRequest(req,&r);
int parseRequest(const char* req,HTTP_REQUEST* hreq){
    /* GET /common/site_scripts.js HTTP/1.1\r\n
       Host: 192.168.249.129\r\n
       User-Agent: Mozilla/5.0 \r\n
       Accept: * / *\r\n
       Accept-Language: zh-CN,zh;\r\n
       Accept-Encoding: gzip, deflate\r\n
       Connection: keep-alive\r\n
       Referer: http://192.168.249.129/c/chrono.html\r\n\r\n
    */
    sscanf(req,"%s%s%s",hreq->method,hreq->path,hreq->protocol);
    
    char* connection = strcasestr(req,"connection:");
    if(connection){
        sscanf(connection,"%*s%s",hreq->connection);
    }
    printf("%d.%ld > [%s][%s][%s][%s]\n",getpid(),syscall(SYS_gettid),
            hreq->method,hreq->path,hreq->protocol,hreq->connection);
    //判断请求方法
    if(strcasecmp(hreq->method,"get")){
        printf("%d.%ld > 无效的方法\n",getpid(),syscall(SYS_gettid));
        return -1;
    }
    //判断协议
    if(strcasecmp(hreq->protocol,"http/1.0") && 
            strcasecmp(hreq->protocol,"http/1.1")){
        printf("%d.%ld > 无效的版本\n",getpid(),syscall(SYS_gettid));
        return -1;
    }
    return 0;
}

//构造响应头
int constructHead(const HTTP_RESPOND* hres,char* head){
    /*  HTTP/1.1 200 OK\r\n
        Server: LaozhangWebserver 4.0\r\n
        Date: Thu 27 Jun 2024 06:13:07\r\n
        Content-Type: application/x-javascript\r\n
        Content-Length: 164\r\n
        Connection: keep-alive\r\n\r\n
    */
    time_t now = time(NULL);
    char datetime[32];//存储时间日期
    strftime(datetime,sizeof(datetime),"%a %d %b %Y %T",gmtime(&now));
    sprintf(head,"%s %d %s\r\n"
                 "Server: NBWebServer 1.0\r\n"
                 "Date: %s\r\n"
                 "Content-Type: %s\r\n"
                 "Content-Length: %ld\r\n"
                 "Connection: %s\r\n\r\n",hres->protocol,hres->status,
                 hres->desc,datetime,hres->type,hres->length,
                 hres->connection);
    return 0;
}








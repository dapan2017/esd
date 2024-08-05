//存储服务器
//声明文件操作类

#pragma once
#include<sys/types.h>
//文件操作类
class file_c{
private:
    int m_fd;//文件描述符

public:
    //构造函数
    file_c(void);
    //析构函数
    ~file_c(void);
    //打开文件
    int open(char const* path,char flag);
    //关闭文件
    int close(void);
    //读取文件
    int read(void* buf,size_t count) const;
    //写入文件
    int write(void const* buf,size_t count) const;
    //设置偏移

    //删除文件
    //打开标志
    static char cosnt O_READ ='r';
    static char const O_WRITE = 'w';
};
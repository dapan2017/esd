//从文件读取数据
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void){
    //打开文件
    int fd = open("./shared.txt",O_RDONLY);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //读取文件内容
    char buf[32] = {};
    ssize_t size = read(fd,buf,sizeof(buf)-1);   
    if(size == -1){
        perror("read");
        return -1;       
    }
    printf("实际读取到%ld个字节\n",size);
    printf("读取到的内容是：%s\n",buf);
    //关闭文件
    close(fd);
    return 0;
}
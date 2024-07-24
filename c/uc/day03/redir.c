//输出重定向
#include<stdio.h>
#include<unistd.h>//close()
#include<fcntl.h>//open()

int main(){
    //目的  修改1的指向   1 ----> out.txt
    close(/*1*/STDOUT_FILENO);//关闭1,1空闲
    int fd = open("./out.txt",O_WRONLY | O_CREAT | O_TRUNC,0664);
    printf("fd = %d\n",fd);
    return 0;
}
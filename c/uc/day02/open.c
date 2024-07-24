//文件的打开和关闭
#include <stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void){
    //打开文件
    int fd = open("./open.txt",O_RDWR | O_CREAT | O_TRUNC,0777);
    if(fd == -1){
        perror("open");
        return -1;
    }
    printf("fd = %d\n",fd);
    //关闭文件
    close(fd);
    return 0;
}
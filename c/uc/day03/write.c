//向文件写入数据
#include <stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
    int fd = open("./shared.txt",O_WRONLY | O_CREAT | O_TRUNC,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    char* buf = "hello world";
    ssize_t size = write(fd,buf,strlen(buf));
    if(size == -1){
        perror("write");
        return -1;
    }
    printf("实际写入文件%ld个字节\n",size);
    close(fd);
}




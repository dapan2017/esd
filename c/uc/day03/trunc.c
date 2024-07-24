//修改文件大小
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void){
    //打开文件
    int fd = open("./trunc.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //向文件写入数据 abcde  5
    char* buf = "abcde";
    if(write(fd,buf,strlen(buf)) == -1){
        perror("write");
        return -1;
    }
    //修改文件大小  abc  3
    if(truncate("./trunc.txt",3) == -1){
        perror("truncate");
        return -1;
    }
    //再次修改文件大小 5 
    if(ftruncate(fd,5) == -1){
        perror("ftruncate");
        return -1;
    }
    //关闭文件
    close(fd);
    return 0;
}





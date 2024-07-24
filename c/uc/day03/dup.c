//文件描述符的复制
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void){
    //关闭输出缓冲区
    setbuf(stdout,NULL);
    //打开文件,得到文件描述符 oldfd
    int oldfd = open("./dup.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(oldfd == -1){
        perror("open");
        return -1;
    }
    //printf("oldfd = %d\n",oldfd);
    //复制文件描述符oldfd,得到文件描述符newfd
    //int newfd = dup(oldfd);
    int newfd = dup2(oldfd,STDOUT_FILENO);
    if(newfd == -1){
        perror("dup");
        return -1;
    }
    printf("newfd = %d\n",newfd);
    //通过oldfd向文件写入数据  hello world!
    char* buf = "hello world!";
    if(write(oldfd,buf,strlen(buf)) == -1){
        perror("write");
        return -1;
    }
    //通过newfd修改文件读写位置 lseek
    if(lseek(newfd,-6,SEEK_END)==-1){
        perror("lseek");
        return -1;
    }
    //通过oldfd再次向文件写入数据 linux!
    buf = "linux!";
    if(write(oldfd,buf,strlen(buf)) == -1){
        perror("write");
        return -1;
    }
    //关闭
    close(oldfd);
    close(newfd);
    return 0;
}

//子进程复制父进程的文件描述符表
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void){
    //父进程打开文件
    int fd = open("./ftab.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //父进程向文件写入数据 hello world! 12
    char* buf = "hello world!";
    if(write(fd,buf,strlen(buf)) == -1){
        perror("write");
        return -1;
    }
    //父进程创建子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程代码,修改文件读写位置 
    if(pid == 0){
        if(lseek(fd,-6,SEEK_END) == -1){
            perror("lseek");
            return -1;
        }
        close(fd);
        return 0;        
    }
    //父进程代码,再次写入数据 linux!
    sleep(1);
    buf = "linux!";
    if(write(fd,buf,strlen(buf)) == -1){
        perror("write");
        return -1;
    }
    close(fd);
    return 0;
}



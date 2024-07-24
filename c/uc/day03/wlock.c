//通过文件锁解决写冲突
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h> //int errno;
int main(int argc,char* argv[]){
    //打开文件
    int fd = open("./conflict.txt",
                O_WRONLY|O_CREAT|O_APPEND,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //加锁
    struct flock lock;
    lock.l_type = F_WRLCK;//写锁
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;//一直锁到文件尾
    lock.l_pid = -1;
    /*if(fcntl(fd,F_SETLKW,&lock) == -1){
        perror("fcntl");
        return -1;
    }*/
    //非阻塞加锁
    while(fcntl(fd,F_SETLK,&lock) == -1){
        if(errno == EACCES || errno == EAGAIN){
            //干点别的去
            printf("文件被锁定,干点别的去\n");
            sleep(1);
        }else{
            perror("fcntl");
            return -1;
        }        
    }
    //写入数据
    // ./conf  hello
    for(int i = 0;i < strlen(argv[1]);i++){
        if(write(fd,&argv[1][i],sizeof(argv[1][i])) == -1){
            perror("write");
            return -1;
        }
        sleep(1);
    }
    //解锁
    struct flock unlock;
    unlock.l_type = F_UNLCK;//解锁
    unlock.l_whence = SEEK_SET;
    unlock.l_start = 0;
    unlock.l_len = 0;//一直锁到文件尾
    unlock.l_pid = -1;
    if(fcntl(fd,F_SETLK,&unlock) == -1){
        perror("fcntl");
        return -1;
    }
    //关闭文件
    close(fd);
    return 0;
    }





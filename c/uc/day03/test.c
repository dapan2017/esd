#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[],char *envp[]){
        int fd=open("./test.txt",O_WRONLY | O_CREAT | O_APPEND,0664);
        if(fd==-1)
        {
                perror("open");
                return -1;

        }

        struct flock lock;
        lock.l_type=F_WRLCK;
        lock.l_whence=SEEK_SET;
        lock.l_start=0;
        lock.l_len=0;
        lock.l_pid=-1;
        if(fcntl(fd,F_SETLKW,&lock)==-1)
        {
                perror("fcntl");
                return -1;

        }
        for(int i=0;i<strlen(argv[1]);i++)
        {
                if(write(fd,&argv[1][i],sizeof(argv[1][i]))==-1)
                {
                        perror("write");
                        return -1;


                }
                sleep(1);
        }      
struct flock unlock;
        unlock.l_type=F_UNLCK;
        unlock.l_whence=SEEK_SET;
        unlock.l_start=0;
        unlock.l_len=0;
        unlock.l_pid=-1;
        if(fcntl(fd,F_SETLK,&unlock)==-1)
        {
                perror("unlock");
                return -1;
        }
        close(fd);
        return 0;
}
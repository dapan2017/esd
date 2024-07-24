#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void){
    int fd = open("./sys.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    for(int i = 0;i < 1000000;i++){
        write(fd,&i,sizeof(int));
    }
    close(fd);
    return 0;   
}



//向管道文件写入数据
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>// mkfifo()
#include<fcntl.h>

int main(void){
    //创建有名管道文件
    printf("%d进程:创建有名管道文件\n",getpid());
    if(mkfifo("./myfifo",0664) == -1){
        perror("mkfifo");
        return -1;
    }
    //打开有名管道文件
    printf("%d进程:打开有名管道文件\n",getpid());
    int fd = open("./myfifo",O_WRONLY);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //写入数据
    printf("%d进程:发送数据\n",getpid());
    for(;;){
        //通过键盘获取数据 scanf fscanf read getchar 
        char buf[64] = {};
        fgets(buf,sizeof(buf),stdin);
        //人为指定退出条件,输入!则结束循环 !
        if(strcmp(buf,"!\n") == 0){
            break;
        }
        //发送数据
        if(write(fd,buf,strlen(buf)) == -1){
            perror("write");
            return -1;
        }
    }
    //关闭有名管道文件
    printf("%d进程:关闭有名管道文件\n",getpid());
    close(fd);
    //删除有名管道文件
    printf("%d进程:删除有名管道文件\n",getpid());
    if(unlink("./myfifo") == -1){
        perror("unlink");
        return -1;
    }
    printf("%d进程:大功告成\n",getpid());
    return 0;
}





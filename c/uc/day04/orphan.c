//孤儿进程演示
#include<stdio.h>
#include<unistd.h>

int main(void){
    //创建子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程代码
    if(pid == 0){
        printf("我的父进程是%d\n",getppid());
        sleep(2);
        printf("我的父进程是%d\n",getppid());
        return 0;
    }
    //父进程代码
    sleep(1);
    return 0;
}



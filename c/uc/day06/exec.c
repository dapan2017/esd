//新进程是否继承旧进程的信号处理方式
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
//信号处理函数
void sigfun(int signo){
    printf("%d进程:捕获到%d号信号\n",getpid(),signo);
}
int main(void){
    //忽略2号
    if(signal(SIGINT,SIG_IGN) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //捕获3号
    if(signal(SIGQUIT,sigfun) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //变身
    if(execl("./new","new",NULL) == -1){
        perror("execl");
        return -1;
    }
    return 0;
}


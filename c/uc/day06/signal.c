//信号处理
#include<stdio.h>
#include<signal.h> // signal
#include<unistd.h>
//信号处理函数
void sigfun(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
}
int main(void){
    //对2号信号进行忽略处理,
    //接下来程序就拥有了忽略2号信号的能力
    if(signal(SIGINT,SIG_IGN) == SIG_ERR){
        perror("signal");
        return 1;
    }
    //对2号信号进行捕获处理
    if(signal(SIGINT,sigfun) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //对2号信号进行默认处理
    if(signal(SIGINT,SIG_DFL) == SIG_ERR){
        perror("signal");
        return -1;
    }
    for(;;);
    return 0;
}
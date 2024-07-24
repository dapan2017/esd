//闹钟
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
//信号处理函数
void sigfun(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
}
int main(void){
    //对14号信号进行捕获处理
    if(signal(SIGALRM,sigfun) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //设置闹钟
    printf("alarm(10)返回%d\n",alarm(10));
    getchar();
    printf("alarm(5)返回%d\n",alarm(5));
    pause();
    return 0;
}




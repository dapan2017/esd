//暂停
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
//信号处理函数
void sigfun(int signum){
    printf("%d进程:%d号信号处理开始\n",getpid(),signum);
    sleep(3);
    printf("%d进程:%d号信号处理结束\n",getpid(),signum);
}
int main(void){
    //对2号信号进行捕获
    if(signal(SIGINT,sigfun) == SIG_ERR){
        perror("signal");
        return -1;
    }
    printf("%d进程:我要一睡不醒\n",getpid());
    int res = pause();
    printf("%d进程:pause函数返回%d\n",getpid(),res);
    return 0;
}
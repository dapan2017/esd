//验证子进程是否继承父进程的信号处理方式
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
//信号处理函数
void sigfun(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
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
    //创建子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程暂时不结束
    if(pid == 0){
        printf("%d进程:我是子进程\n",getpid());
        for(;;);
        return 0;
    }
    //父进程
    printf("%d进程:我是父进程\n",getpid());
    sleep(1);
    return 0;
}
//发送信号
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<errno.h>
//信号处理函数
void sigfun(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
}
int main(void){
    //父进程创建子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程代码,对2号信号进行捕获处理
    if(pid == 0){
        /*if(signal(SIGINT,sigfun) == SIG_ERR){
            perror("signal");
            return -1;
        }*/
        for(;;);
        return 0;       
    }
    //父进程代码,向子进程发送2号信号
    getchar();
    if(kill(pid,SIGINT) == -1){
        perror("kill");
        return -1;
    }
    //判断子进程是否存在
    getchar();
    if(kill(pid,0) == -1){
        if(errno == ESRCH){
            printf("子进程不存在\n");
        }else{
            perror("kill");
            return -1;
        }
    }else{
        printf("子进程存在\n");
    }//子进程以僵尸状态存在,依然占用ID号
    getchar();
    return 0;
}



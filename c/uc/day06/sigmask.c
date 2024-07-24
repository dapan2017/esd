//信号屏蔽
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
//假装更新数据库
void updatedb(void){
    for(int i = 0;i < 5;i++){
        printf("正在更新第%d条数据...\n",i+1);
        sleep(1);
    }
}
//信号处理函数
void sigfun(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
}

int main(void){
    int signum = /*SIGINT*/ 50;
    //对2号信号,sigfu进行捕获处理
    if(signal(signum,sigfun) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //屏蔽2号信号
    printf("%d进程:屏蔽%d号信号\n",getpid(),signum);
    sigset_t sigset;//信号集
    sigemptyset(&sigset);//清空信号集
    sigaddset(&sigset,signum);//添加信号到信号集
    sigset_t oldset;//用来输出以前的信号掩码
    if(sigprocmask(SIG_SETMASK,&sigset,&oldset) == -1){
        perror("sigprocmask");
        return -1;
    }
    //创建子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程代码,向父进程发送2号信号
    if(pid == 0){
        for(int i = 0;i < 5;i++){
            printf("%d进程:向父进程发送%d号信号\n",getpid(),signum);   
            if(kill(getppid(),signum) == -1){
                perror("kill");
                return -1;
            }
        }
        return 0;
    }
    //父进程代码,更新数据库
    updatedb();
    //父进程解除2号信号的屏蔽
    printf("%d进程:解除对%d号信号的屏蔽\n",getpid(),signum);
    if(sigprocmask(SIG_SETMASK,&oldset,NULL) == -1){
        perror("sigprocmask");
        return -1;
    }
    //父进程收尸
    if(wait(NULL) == -1){
        perror("wait");
        return -1;
    }
    return 0;
}



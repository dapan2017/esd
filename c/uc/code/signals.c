//信号模块实现
#include<unistd.h>
#include<sys/syscall.h>
#include<signal.h>
#include<stdio.h>
#include"signals.h"

//初始化信号
int initSignals(void){
    printf("%d.%ld > 忽略大部分信号\n",getpid(),syscall(SYS_gettid));
    for(int i = SIGHUP;i <= SIGRTMAX;i++){
        if(i != SIGINT && i != SIGTERM){
            signal(i,SIG_IGN);
        }
    }
    return 0;
}

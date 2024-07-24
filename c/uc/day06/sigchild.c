//太平间信号
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
#include<errno.h>
//信号处理函数
void sigchild(int signum){
    printf("%d进程:捕获到%d号信号\n",getpid(),signum);
    sleep(2);//假装信号处理函数执行比较耗时
    for(;;){
        pid_t pid = waitpid(-1,NULL,WNOHANG);
        if(pid == -1){
            if(errno == ECHILD){
                printf("没有子进程了\n");
                break;
            }else{
                perror("waitpid");
                return;
            }
        }else if( pid == 0){
            printf("子进程在运行,收不了\n");
            break;
        }else{
            printf("%d进程:回收了%d进程的僵尸\n",getpid(),pid);
        }
    }
    /*for(;;){
        pid_t pid = wait(NULL);
        if(pid == -1){
            if(errno == ECHILD){
                printf("没有子进程了\n");
                break;
            }else{
                perror("wait");
                return;
            }
        }
        printf("%d进程:回收了%d进程的僵尸\n",getpid(),pid);
    }*/

}
int main(void){
    //对17号信号进行捕获处理
    if(signal(SIGCHLD,sigchild) == SIG_ERR){
        perror("signal");
        return -1;
    }
    //创建多个子进程
    for(int i = 0;i < 5;i++){
        pid_t pid = fork();
        if(pid == -1){
            perror("fork");
            return -1;
        }
        if(pid == 0){
            printf("%d进程:我是子进程\n",getpid());
            //sleep(1 + i);
            sleep(1);
            return 0;
        }
    }    
    //创建老六
    pid_t oldsix = fork();
    if(oldsix == -1){
        perror("fork");
        return -1;
    }
    if(oldsix == 0){
        printf("%d进程:我是老六\n",getpid());
        sleep(15);
        return 0;
    }
    //父进程代码
    for(;;);
    return 0;
}




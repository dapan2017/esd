//僵尸进程演示
#include<stdio.h>
#include<unistd.h>

int main(void){
    //创建一个子进程
    pid_t pid = fork();
    if(pid == -1){
        perror("fork");
        return -1;
    }
    //子进程代码
    if(pid == 0){
        printf("%d进程:马上变僵尸\n",getpid());
        return 0;        
    }
    //父进程代码
    sleep(15);
    return 0;
}

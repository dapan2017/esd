//创建子进程
#include<stdio.h>
#include<unistd.h>// fork()

int main(void){
    printf("%d进程:我是父进程\n",getpid());
    pid_t a = fork();
    if(a == -1){
        perror("fork");
        return -1;
    }
    //子进程代码
    if(a == 0){
        printf("%d进程:我是子进程\n",getpid());
        return 0;
    }
    //父进程代码
    printf("%d进程:我是父进程\n",getpid());
    return 0;

    /*if(a == 0){
        //子进程代码
        printf("%d进程:锅包肉\n",getpid());
        return 0;
    }else{
        //父进程代码
        printf("%d进程:溜肉段\n",getpid());
        return 0;
    }
    printf("%d进程:铁锅炖大鹅\n",getpid());
    return 0;*/
}




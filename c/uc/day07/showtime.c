//显示时间
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<time.h>
//信号处理函数
void showtime(int signum){
    time_t now = time(NULL);
    struct tm* l = localtime(&now);
    printf("\r%02d:%02d:%02d",l->tm_hour,l->tm_min,l->tm_sec);
    alarm(1);
}

int main(void){
    setbuf(stdout,NULL);
    //对14号信号进行捕获处理
    if(signal(SIGALRM,showtime) == SIG_ERR){
        perror("signal");
        return -1;
    }
    showtime(0);
    for(;;);
    return 0;
}
//分离线程演示
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>
//线程过程函数
void* pthread_fun(void* arg){
    for(int i = 0;i < 100;i++){
        putchar('-');
        usleep(50000);
    }
    return NULL;
}
int main(void){
    setbuf(stdout,NULL);
    pthread_t tid;
    pthread_create(&tid,NULL,pthread_fun,NULL);
    //设置分离线程
    pthread_detach(tid);
    /*int error = pthread_join(tid,NULL);
    if(error){
        fprintf(stderr,"pthread_join:%s\n",strerror(error));
        return -1;
    }*/
    for(int i = 0;i < 100;i++){
        putchar('+');
        usleep(100000);
    }
    return 0;
}










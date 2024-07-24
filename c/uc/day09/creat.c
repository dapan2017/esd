//创建新线程
#include<stdio.h>
#include<string.h>//strerror();
#include<unistd.h>
#include<pthread.h>// pthread_create()

//线程过程函数
void* pthread_fun(void* arg){
    // arg ----> "hello"
    printf("%lu线程:我是子线程\n",pthread_self());
    printf("%lu线程:%s\n",pthread_self(),(char*)arg);
    return NULL;
}

int main(void){
    printf("%lu线程:我是主线程\n",pthread_self());

    pthread_t tid;//用来输出线程的ID
    int error = pthread_create(&tid,NULL,pthread_fun,"hello");
    if(error){
        fprintf(stderr,"pthread_create:%s\n",strerror(error));
        return -1;
    }
    sleep(1);
    return 0;
}


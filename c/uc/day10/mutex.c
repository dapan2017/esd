//通过互斥锁解决并发冲突
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int g_cn = 0;

//互斥锁
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

//线程过程函数
void* add(void* arg){
    //加锁
    //pthread_mutex_lock(&mutex);
    for(int i = 0;i < 1000000;i++){
        //加锁
        pthread_mutex_lock(&mutex);
        g_cn++;
        //解锁
        pthread_mutex_unlock(&mutex);
    }
    //解锁
    //pthread_mutex_unlock(&mutex);
    return NULL;
}

int main(void){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,add,NULL);
    pthread_create(&t2,NULL,add,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("g_cn = %d\n",g_cn);
    return 0;
}

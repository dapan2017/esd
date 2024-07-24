//通过条件变量解决生产者和消费者问题
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
char g_storage[10];//仓库
int g_stock = 0;//库存量
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;//互斥锁
pthread_cond_t pcond = PTHREAD_COND_INITIALIZER;//生产者卧室
pthread_cond_t ccond = PTHREAD_COND_INITIALIZER;//消费者卧室
//生产和消费过程  生产者:ABC<---X     消费者:ABC--->X
void show(char* who,char* op,char prod){
    printf("%s:",who);
    for(int i = 0;i < g_stock;i++){
        printf("%c",g_storage[i]);
    }
    printf("%s%c\n",op,prod);
}

//生产者线程
void* producer(void* arg){
    char* who = (char*)arg;
    for(;;){
        //加锁
        pthread_mutex_lock(&mutex);
        //判满
        if(g_stock == 10){
            printf("%s:满仓\n",who);
            pthread_cond_wait(&pcond,&mutex);
        }
        //生产
        char prod = 'A' + rand() % 26;
        show(who,"<---",prod);
        g_storage[g_stock] = prod;
        g_stock++;
        //唤醒消费者
        pthread_cond_signal(&ccond);
        //解锁
        pthread_mutex_unlock(&mutex);
        usleep((rand() % 100) * 1000);
    }
    return NULL;
}
//消费者线程
void* consumer(void* arg){
    char* who = (char*)arg;
    for(;;){
        //加锁
        pthread_mutex_lock(&mutex);
        //判空
        if(g_stock == 0){
            printf("%s:空仓\n",who);
            pthread_cond_wait(&ccond,&mutex);
        }
        //消费
        char prod = g_storage[--g_stock];
        show(who,"--->",prod);
        //唤醒生产者
        pthread_cond_signal(&pcond);
        //解锁
        pthread_mutex_unlock(&mutex);
        usleep((rand() % 100) * 1000);
    }
    return NULL;
}

int main(void){
    srand(getpid());
    pthread_t t1,t2;
    pthread_create(&t1,NULL,producer,"生产者");
    pthread_create(&t2,NULL,consumer,"消费者");
    getchar();
    return 0;
}










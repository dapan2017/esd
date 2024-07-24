//线程的汇入
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
#define PI 3.14
//double s = 0 ;

//线程过程函数
void* area(void* arg){
    // arg ----> &r
    double r = *(double*)arg;
    //static double s;
    //s = PI * r * r;
    double* s = malloc(sizeof(double));
    *s = PI * r * r;
    return s;
}

int main(void){
    double r = 10;
    pthread_t tid;//用来输出线程的ID
    pthread_create(&tid,NULL,area,&r);
    double* p;//用来输出线程的返回值
    
    double r2 = 20;
    pthread_t tid2;//用来输出线程的ID
    pthread_create(&tid2,NULL,area,&r2);
    double* p2;//用来输出线程的返回值
   
    pthread_join(tid,(void**)&p);// p ----> &s
    printf("圆的面积是%lg\n",*p);
    free(p);

    pthread_join(tid2,(void**)&p2);// p ----> &s
    printf("圆的面积是%lg\n",*p2);
    free(p2);
    return 0;
}






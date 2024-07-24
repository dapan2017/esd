//线程的参数
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
#define PI 3.14
//double s = 0 ;

//线程过程函数
void* area(void* arg){
    // arg ----> &r
    double r = *(double*)arg;
    //s = PI * r * r;
    *(double*)arg = PI * r * r;
    return NULL;
}
//计算平均值

int main(void){
    double r = 10;
    pthread_t tid;//用来输出线程的ID
    pthread_create(&tid,NULL,area,&r);
    sleep(1);
    //printf("圆的面积是%lg\n",s);
    printf("圆的面积是%lg\n",r);

    double data[3] = {4,8};    
    return 0;
}






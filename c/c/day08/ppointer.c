//指针练习
#include<stdio.h>
//编写函数swap,用来交换main中指针p1和p2的指向
void swap(char** pa,char** pb){
    // pa ---> &p1     pb ---> &p2
    char* cnt;
    cnt = *pa;
    *pa = *pb;
    *pb = cnt;
}

int main(void){
    char* p1 = "hello";
    char* p2 = "world";
    swap(&p1,&p2);
    printf("%s %s\n",p1,p2);
    return 0;
}

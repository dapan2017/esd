//指针和函数
#include<stdio.h>
//int* p = NULL;
//函数的形参可以是指针类型,接收地址
void fun(int* p){// p 形参
    //printf("*p = %d\n",*p);
    // p ----> &x
    *p = 20;
}

int* bar(void){
    int a = 20;//局部变量,生命周期,函数级
    static int b = 20;//静态局部,生命周期,进程级
    printf("&a = %p\n",&a);
    //return &a;
    return &b;
}
int main(void){
    int x = 10;
    //p = &x;
    fun(&x);// &x 实参
    printf("x = %d\n",x);
    
    int* p = bar();
    printf("p = %p\n",p);
    //printf("*p = %d\n",*p);
    return 0;
}

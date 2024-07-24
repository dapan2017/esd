//指针
//指针 = 地址
#include<stdio.h>

int main(void){
    int a = 10;
    // p 指针类型变量,存储a的地址
    // int* p; int *p; int * p;
    int* p = &a;
    // 通过指针p,可以访问a的存储区
    // *p,表示对p进行解引用,通过地址访问对应的存储区
    printf("*p = %d\n",*p);
    printf("a  = %d\n",a);
    *p = 20;
    printf("a  = %d\n",a);
    printf("p  = %p\n",p);
    printf("sizeof(p) = %lu\n",sizeof(p));

    int b = 20;
    p = &b;
    printf("p  = %p\n",p);
    printf("*p = %d\n",*p);
    *p = 30;
    printf("b  = %d\n",b);
    return 0;
}







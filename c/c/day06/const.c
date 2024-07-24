//const关键字
#include<stdio.h>

int main(void){
    //受const修饰的变量不允许修改
    const int a = 10;
    //a = 14;
    printf("a = %d\n",a);

    int b = 11;
    //常量指针
    //不能通过p修改b的值
    //p自身的值可以修改
    //const int* p  <->  int const* p
    const int* p = &b;
    //*p = 12;//error
    //p = &a;// ok
    
    int c = 12;
    //指针常量
    //p1自身的值不能被修改
    //通过p1可以修改c的值
    int* const p1 = &c;
    //p1 = &b; //error
    //*p1 = 13; // ok
    
    int d = 13;
    //常量指针常量
    //不能通过p2改d的值
    //p2自己的值也不能改
    const int* const p2 = &d;

    return 0;i
}






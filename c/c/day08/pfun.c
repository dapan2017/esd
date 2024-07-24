//函数指针
#include<stdio.h>

int add(int a,int b){
    return a + b;
}

int main(void){
    // 函数指针 = 函数地址
    int (*padd)(int,int) = add;
    // 通过函数指针可以调用函数
    int res = padd(10,20);
    printf("%d\n",res);
    return 0;
}

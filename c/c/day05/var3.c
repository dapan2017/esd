#include<stdio.h>
//外部声明
extern int g_a;
//extern int g_b;//静态变量,当前文件不可用

extern void fun(void);
//extern void bar(void);//静态函数,当前文件不可用

int main(void){
    printf("main:g_a = %d\n",g_a);
    printf("main:g_b = %d\n",g_b);
    
    fun();
    bar();
    return 0;
}


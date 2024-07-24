//生命周期和作用域
#include<stdio.h>
//全部变量
//生命周期:从执行开始,到执行结束,进程级
//作用域:从定义开始,之下所有函数皆可用
int global = 20;

void fun(int x){
    int b = 11;
    // b,形参x,都属于函数的局部变量
    //printf("main:a = %d\n",a);
    printf("fun:global = %d\n",global);
}

int main(void){
    //局部变量
    //生命周期:从定义开始,到所在函数执行结束
    //作用域:函数,从定义开始,之下的代码都可用
    int a = 10;
    fun(1);
    //printf("fun:b = %d\n",b);
    if(a == 10){
        //块级变量:
        //作用域:只在所定义的{}内可用
        //生命周期:从定义开始到}结束
        int b = 20;
        printf("b = %d\n",b);
    }
    //printf("b = %d\n",b);
    printf("main:global = %d\n",global);
    return 0;
}



//静态变量的生命周期和作用域
#include<stdio.h>

void fun(void){
    static int s_c = 13;
    printf("s_c = %d\n",s_c);
    s_c = 18;
}

int main(void){
    //静态局部变量
    //生命周期:从程序执行开始,到程序执行结束,进程级
    //作用域:依然函数内部
    static int s_a = 10;
    fun();
    fun();
    return 0;
}

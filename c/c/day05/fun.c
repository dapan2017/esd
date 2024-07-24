//函数演示
//一次编写,灵活使用
//编译顺序,gcc,自上而下,逐行编译
//执行顺序,main开始执行

#include<stdio.h>

//函数声明
//返回值类型 函数名(形参类型表);
void fun(void);
int add(int,int);

int main(void){
    //函数的调用
    fun();
    printf("------------\n");
    fun();
    
    int num = add(3,5);// 3,5 实际参数 实参
    printf("求和结果是%d\n",num);
    printf("求和结果是%d\n",add(24,99));
    return 0;
}
//函数的实现
void fun(void){
    printf("铁锅炖大鹅\n");
    printf("小鸡炖蘑菇\n");
    printf("猪肉炖粉条\n");
}
// a,b 形参变量
int add(int a,int b){
    // a = 3   b = 5
    int res = a + b;
    return res;
}












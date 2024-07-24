//函数指针
#include<stdio.h>
//别名是 pfun_t ,是函数指针类型的别名
typedef int (*pfun_t)(int,int);

int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int calc(int a,int b,pfun_t p){
    // p ---> add 通过函数指针p可以调用函数
    int res = p(a,b);
    return res;
}

int main(void){
    printf("3 + 2 = %d\n",calc(3,2,add));
    printf("6 - 2 = %d\n",calc(6,2,sub));
    return 0;
}




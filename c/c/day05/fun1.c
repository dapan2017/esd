//递归函数
#include<stdio.h>
void fun(void){
    printf("超哥有点帅!\n");
    fun();
}
void bar(int n){
    if(n == 1){
        printf("1\n");
        return ;
    }
    bar(n - 1);
    printf("%d\n",n);
}

int main(void){
    //fun();
    
    bar(4);
    return 0;
}

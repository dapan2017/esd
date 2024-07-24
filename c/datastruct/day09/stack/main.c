//调用模块
#include<stdio.h>
#include"stack.h"

int main(void){
    //栈
    stack_t sk;
    //初始化
    printf("栈的初始化\n");
    stack_init(5,&sk);
    //压栈 1 2 3 4 5
    int data = 1;
    printf("压栈\n");
    while(stack_full(&sk) != 1){
        stack_push(&sk,data++);
    }
    //弹栈 5 4 3 2 1
    printf("弹栈\n");
    while(stack_empty(&sk) != 1){
        printf("%d ",stack_pop(&sk));
    }
    printf("\n");
    //释放
    printf("释放\n");
    stack_deinit(&sk);
    return 0;
}






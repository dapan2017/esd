//调用
#include<stdio.h>
#include"queue.h"
int main(void){
    //队列
    queue_t qu;
    //初始化
    queue_init(&qu,5);
    //入队 1 2 3 4 5 
    int data = 1;
    while(queue_full(&qu) != 1){
        queue_push(&qu,data++);
    }
    //出队 1 2 3 4 5
    while(queue_empty(&qu) != 1){
        printf("%d ",queue_pop(&qu));
    }
    printf("\n");
    //释放
    queue_deinit(&qu);
    return 0;
}

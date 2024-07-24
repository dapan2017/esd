//队列的实现
#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

//队列的初始化
//queue_t qu;
//queue_init(&qu,5);
void queue_init(queue_t* q,int cap){
    q->arr = malloc(sizeof(int) * cap);
    q->size = 0;
    q->cap = cap;
    q->front = 0;
    q->rear = 0;
}

//队列的释放
void queue_deinit(queue_t* q){
    free(q->arr);
    q->arr = NULL;
    q->size = 0;
    q->cap = 0;
    q->front = 0;
    q->rear = 0;
}

//队列判满
int queue_full(queue_t* q){
    return q->size == q->cap ? 1 : 0;
}

//队列判空
int queue_empty(queue_t* q){
    return q->size == 0 ? 1 : 0;
}
//入队 
void queue_push(queue_t* q,int data){
    // 如果rear超过了存储的极限,应该归0
    if(q->rear == q->cap){
        q->rear = 0;
    }
    q->arr[q->rear] = data;
    q->rear++;
    q->size++;
}
//出队
int queue_pop(queue_t* q){
    //如果front超过了极限,应该归0
    if(q->front == q->cap){
        q->front = 0;
    }
    int data = q->arr[q->front];
    q->front++;
    q->size--;
    return data;
}




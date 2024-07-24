//队列的头文件
#ifndef __QUEUE_H__
#define __QUEUE_H__
//队列
typedef struct queue{
    int* arr;//记录存储区的首地址
    int size;//有效元素个数
    int cap;//容量
    int front;//记录出队元素下标
    int rear;//记录入队元素下标
}queue_t;
// queue_t qu;

//队列的操作
//队列的初始化
void queue_init(queue_t* q,int cap);
//队列的释放
void queue_deinit(queue_t* q);
//队列判满 满 1  非满 0
int queue_full(queue_t* q);
//队列判空 空 1  非空 0
int queue_empty(queue_t* q);
//入队
void queue_push(queue_t* q,int data);
//出队
int queue_pop(queue_t* q);
#endif











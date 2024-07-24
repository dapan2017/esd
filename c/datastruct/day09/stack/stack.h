//栈的头文件
#ifndef __STACK_H__
#define __STACK_H__
//结构体类型,表示栈
typedef struct stack{
    int* arr;//记录存储区的首地址
    int top;//即将存入的元素下标
    int cap;//容量
}stack_t;

//栈的操作
//栈的初始化 stack_t s;  s.arr  s.top  s.cap
void stack_init(int cap,stack_t* s);
//栈的释放
void stack_deinit(stack_t* s);
//栈的判满 满 1  非满 0
int stack_full(stack_t* s);
//栈的判空 空 1  非空 0
int stack_empty(stack_t* s);
//压栈
void stack_push(stack_t* s,int data);
//弹栈 
int stack_pop(stack_t* s);
#endif //__STACK_H__





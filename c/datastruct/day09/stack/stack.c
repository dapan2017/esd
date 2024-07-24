//栈的实现
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

//栈的初始化
//stack_t sk;   sk.arr   sk.top  sk.cap
//stack_init(5,&sk);
void stack_init(int cap,stack_t* s){
    s->arr = malloc(sizeof(int) * cap);
    s->top = 0;
    s->cap = cap;
}
//栈data的释放
void stack_deinit(stack_t* s){
    free(s->arr);
    s->arr = NULL;
    s->top = 0;
    s->cap = 0;
}
//栈的判满
int stack_full(stack_t* s){
    if(s->top == s->cap){
        return 1;
    }else{
        return 0;
    }
    // return s->top == s->cap ? 1 : 0;
}
//栈的判空
int stack_empty(stack_t* s){
    return s->top == 0 ? 1 : 0;
}
//压栈
void stack_push(stack_t* s,int data){
    s->arr[s->top] = data;
    s->top++;
}
//弹栈
int stack_pop(stack_t* s){
    return s->arr[--s->top];
}






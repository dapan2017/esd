#include<stdio.h>
#include"list.h"

int main(void){
    //双链表
    list_t list;
    //初始化
    list_init(&list);
    //头部插入
    list_add_head(&list,30);
    list_add_head(&list,20);
    //尾部插入
    list_add_tail(&list,80);
    list_add_tail(&list,90);
    //顺序插入
    list_add(&list,10);
    list_add(&list,70);
    list_add(&list,40);
    list_add(&list,60);
    list_add(&list,50);
    //遍历链表
    list_travel(&list);
    //删除节点
    list_del(&list,30);
    list_del(&list,40);
    //遍历链表
    list_travel(&list);
    
    //释放
    list_deinit(&list);
    return 0;
}





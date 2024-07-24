//链表实现
#include<stdio.h>
#include<stdlib.h>
#include"list.h"

//链表的初始化
//list_t list; list.head  list.tail
//list_init(&list);
void list_init(list_t* l){
    //头节点 
    l->head = malloc(sizeof(node_t));
    //尾节点
    l->tail = malloc(sizeof(node_t));

    //头尾节点存入数据0
    l->head->data = 0;
    l->tail->data = 0;
    //头尾节点相连
    //头节点中next指针 指向 尾节点
    //尾节点中next指针 指向 NULL
    l->head->next = l->tail;
    l->tail->next = NULL;
}

//链表的释放
void list_deinit(list_t* l){
    //将头节点地址 存入 pnode指针
    node_t* pnode = l->head;
    while(pnode){
        //暂存下一个节点的地址
        node_t* tmp = pnode->next;
        //释放当前节点
        free(pnode);
        //pnode指向下一个节点
        pnode = tmp;
    }
    //头尾指针置空
    l->head = NULL;
    l->tail = NULL;
}















//链表头文件
#ifndef __LIST_H__
#define __LIST_H__
//节点
typedef struct node{
    int data;
    struct node* next;
}node_t;

//链表
typedef struct list{
    node_t* head;//记录链表头节点的地址
    node_t* tail;//记录链表尾节点的地址
}list_t;
// list_t list;

//链表的初始化
void list_init(list_t* l);
//链表的释放
void list_deinit(list_t* l);
//头部插入
void list_add_head(list_t* l,int data);
//尾部插入
void list_add_tail(list_t* l,int data);
//顺序插入
void list_add(list_t* l,int data);
//删除节点
void list_del(list_t* l,int data);
//遍历链表
void list_travel(list_t* l);
#endif 




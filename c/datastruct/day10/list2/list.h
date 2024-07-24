//双链表头文件
#ifndef __LIST_H__
#define __LIST_H__
//节点
typedef struct node{
    int data;//数据
    struct node* next;//记录后一个节点的地址
    struct node* prev;//记录前一个节点的地址
}node_t;

//链表
typedef struct list{
    node_t head;//头节点
    node_t tail;//尾节点
}list_t;
// list_t list;  list.head  list.tail

//初始化
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








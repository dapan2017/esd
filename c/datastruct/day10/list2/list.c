//双链表实现
#include<stdio.h>
#include<stdlib.h>
#include"list.h"

//初始化
//list_t list;
//list_init(&list);
void list_init(list_t* l){
    //头尾节点,存入0
    l->head.data = 0;
    l->tail.data = 0;
    //处理头节点里的指针
    l->head.next = &l->tail;
    l->head.prev = NULL;
    //处理尾节点里的指针
    l->tail.next = NULL;
    l->tail.prev = &l->head;
}
//链表释放
void list_deinit(list_t* l){
    while(l->head.next != &l->tail){
        node_t* first = &l->head;
        node_t* mid = first->next;
        node_t* last = mid->next;
        //连接节点
        //前面节点的next指针 指向 后面节点
        first->next = last;
        //后面节点的prev指针 指向 前面节点
        last->prev = first;
        //释放mid指向的节点
        free(mid);
        mid = NULL;
    }
}
//头部插入
void list_add_head(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;
    //插入新节点
    node_t* first = &l->head;
    node_t* mid = first->next;
    
    //让first指向的节点里的next指针 指向 新节点
    first->next = new;
    //让新节点的next指针 指向 mid指向的节点
    new->next = mid;
    //让mid指向节点的prev指针 指向 新节点
    mid->prev = new;
    //让新节点的prev指针 指向 first指向节点
    new->prev = first;
}

//尾部插入
void list_add_tail(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    //插入新节点
    node_t* first = &l->tail;
    node_t* mid = first->prev;

    //让mid指向节点的后指针 指向 新节点
    mid->next = new;
    //让新节点的后指针 指向 first指向节点
    new->next = first;
    //让first指向节点的前指针 指向 新节点
    first->prev = new;
    //让新节点的前指针 指向 mid指向节点
    new->prev = mid;
}
//顺序插入
void list_add(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;
    //找位置插入
    for(node_t* p = &l->head;p != &l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        //mid指向节点第一次比新节点大,则新节点插入first mid之间
        //如果mid指向尾节点,新节点最大
        if(mid->data > new->data || mid == &l->tail){
            //让first指向节点的后指针 指向 新节点
            first->next = new;
            //让新节点的后指针 指向 mid指向节点
            new->next = mid;
            //让mid指向节点的前指针 指向 新节点
            mid->prev = new;
            //让新节点的前指针 指向 first指向节点
            new->prev = first;
            break;
        }
    }
}

//删除节点
void list_del(list_t* l,int data){
    for(node_t* p = &l->head;p != &l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        node_t* last = mid->next;
        if(mid->data == data){
            //让前后节点相连
            //让前面节点的后指针 指向 后节点
            first->next = last;
            //让后面节点的前指针 指向 前节点
            last->prev = first;
            //释放中间节点
            free(mid);
            mid = NULL;
            break;
        }
    }
}

//遍历链表
void list_travel(list_t* l){
    for(node_t* p = &l->head;p != &l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        if(mid != &l->tail){
            printf("%d ",mid->data);
        }
    }
    printf("\n");
}







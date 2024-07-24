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
//头部插入
void list_add_head(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = NULL;
    //将新节点插入指定位置
    //让新节点的next指针 指向 第一个有效节点
    new->next = l->head->next;
    //让头节点的next指针 指向 新节点
    l->head->next = new;
}
//尾部插入
void list_add_tail(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = NULL;
    //循环确定插入位置
    for(node_t* p = l->head;p != l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        //当mid指针指向尾节点,则first指向最后一个有效节点
        //新节点应插入在first和mid指向的节点之间
        if(mid == l->tail){
            //让first指向的节点的next指针 指向 新节点
            first->next = new;
            //让新节点的next指针 指向 尾节点
            new->next = mid;
            break;
        }
    }
}
//顺序插入
void list_add(list_t* l,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = NULL;
    //找位置插入
    for(node_t* p = l->head;p != l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        //当mid指针指向的节点,第一次比新节点大
        //新节点应该插入到first和mid之间
        //如果mid指向了尾节点,说明新节点最大
        if(mid->data > new->data || mid == l->tail){
            //让first指向的节点的next指针 指向 新节点
            first->next = new;
            //让新节点的next指针 指向 mid指向的节点
            new->next = mid;
            break;
        }
    }
}
//删除节点
void list_del(list_t* l,int data){
    //找到要删除的节点
    for(node_t* p = l->head;p != l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        node_t* last = mid->next;
        if(mid->data == data){
            //连接前后两个节点,释放mid指向节点
            first->next = last;
            free(mid);
            mid = NULL;
            break;
        }
    }
}
//遍历链表
void list_travel(list_t* l){
    for(node_t* p = l->head;p != l->tail;p = p->next){
        node_t* first = p;
        node_t* mid = first->next;
        if(mid != l->tail){
            printf("%d ",mid->data);
        }
    }
    printf("\n");
}













//头文件
#ifndef __TREE_H__
#define __TREE_H__
//节点
typedef struct node{
    int data;
    struct node* left;//记录左侧节点地址
    struct node* right;//记录右侧节点地址
}node_t;

//树
typedef struct tree{
    struct node* root;//记录树根的地址
    int cnt;//记录元素个数
}tree_t;
// tree_t tree;

//初始化
void tree_init(tree_t* t);
//插入节点
void tree_insert(tree_t* t,int data);
//删除节点
void tree_del(tree_t* t,int data);
//前序遍历
void tree_first(node_t* n);
//中序遍历
void tree_mid(node_t* n);
//后序遍历
void tree_last(node_t* n);
#endif 





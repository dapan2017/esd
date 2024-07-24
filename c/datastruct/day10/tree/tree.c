//树的实现
#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

//树的初始化
//tree_t tree;   tree.root  tree.cnt
void tree_init(tree_t* t){
    t->root = NULL;
    t->cnt = 0;
}
//插入节点
void tree_insert(tree_t* t,int data){
    //创建新节点
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    //如果root为空,说明还没有根节点
    //此时的新节点即作为根节点
    if(t->root == NULL){
        t->root = new;
        t->cnt++;
        return;
    }
    //找位置,插入

}










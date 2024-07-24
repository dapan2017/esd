//树的测试
#include<stdio.h>
#include"tree.h"

int main(void){
    //定义树
    tree_t tree;
    //初始化
    tree_init(&tree);
    //插入节点
    tree_insert(&tree,60);
    tree_insert(&tree,30);
    tree_insert(&tree,90);
    tree_insert(&tree,10);
    tree_insert(&tree,40);
    tree_insert(&tree,50);
    tree_insert(&tree,20);
    tree_insert(&tree,70);
    tree_insert(&tree,80);
    tree_insert(&tree,100);
    //遍历 
    tree_first(tree.root);
    printf("\n");
    tree_mid(tree.root);
    printf("\n");
    tree_last(tree.root);
    printf("\n");
    //删除
    tree_del(&tree,30);
    //遍历 
    tree_first(tree.root);
    printf("\n");
    tree_mid(tree.root);
    printf("\n");
    tree_last(tree.root);
    printf("\n");
    return 0;
}





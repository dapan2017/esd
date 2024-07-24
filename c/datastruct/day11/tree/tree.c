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
    //p1 p2,确定插入位置
    node_t* p1,*p2;
    p1 = p2 = t->root;
    while(p2 != NULL){
        // p1 慢 p2一步
        p1 = p2;
        //p2 探路
        if(p2->data > data){
            p2 = p2->left;
        }else{
            p2 = p2->right;
        }
    }//循环结束,p2指向NULL,p1指向的节点,即为新节点的父节点
    //判断新节点,挂在父节点的哪一侧
    if(p1->data > data){
        p1->left = new;
    }else{
        p1->right = new;
    }
    //计数加一
    t->cnt++;
}

//删除节点
void tree_del(tree_t* t,int data){
    node_t* ptar = t->root;//要删除的节点
    node_t* pnode = t->root;//要删除的节点的父节点
    while(ptar->data != data && ptar != NULL){
        //ponde 慢 ptar 一步
        pnode = ptar;
        //ptar先锋,找要删除的节点
        if(ptar->data > data){
            ptar = ptar->left;
        }else{
            ptar = ptar->right;
        }
    }
    //如果ptar指向节点的数据,和要删除数据相同,则找到删除目标
    //ptar指向要删除的目标,pnode指向的就是目标父节点
    //如果循环结束后,ptar为空,说明要删除的节点不存在
    if(ptar == NULL){
        printf("没找到要删除的节点\n");
        return;
    }

    // left记录要删除的目标节点的左子树
    // right记录要删除的目标节点的右子树
    node_t* left = ptar->left;
    node_t* right = ptar->right;
    
    //目标节点,左右子树都没有
    if(left == NULL && right == NULL){
        //让父节点 指向 目标节点的指针置空
        if(ptar->data > pnode->data){
            pnode->right = NULL;
        }else{
            pnode->left = NULL;
        }
        //释放目标节点
        free(ptar);
        ptar = NULL;
        t->cnt--;
    }

    //目标节点只有右子树
    if(left == NULL && right != NULL){
        //判断目标节点的右子树应该挂在父节点的哪一侧
        if(ptar->data < pnode->data){
            pnode->left = right;
        }else{
            pnode->right = right;
        }
        //释放目标节点
        free(ptar);
        ptar = NULL;
        t->cnt--;    
    }
    //目标节点只有左子树
    if(left != NULL && right == NULL){
        //判断目标节点的左子树应该挂在父节点的哪一侧
        if(ptar->data < pnode->data){
            pnode->left = left;
        }else{
            pnode->right = left;
        }
        //释放目标节点
        free(ptar);
        ptar = NULL;
        t->cnt--;    
    }
    
    //目标节点左右子树都存在
    if(left != NULL && right != NULL){
        //将左右子树合成一颗新树
        //找到右子树最左侧位置,讲左子树挂上
        node_t* p1,*p2;
        p1 = p2 = right;
        while(p2 != NULL){
            // p1 慢 p2 一步
            p1 = p2;
            //p2不停左移
            p2 = p2->left;
        }//当循环结束后,p2为NULL,p1记录右子树上最左侧位置

        //将左子树挂在右子树最左侧
        //right表示的就是合成的新树
        p1->left = left;

        //新树挂在父节点的哪侧?
        if(ptar->data < pnode->data){
            pnode->left = right;
        }else{
            pnode->right = right;
        }
        //释放目标节点
        free(ptar);
        ptar = NULL;
        t->cnt--;    
    }
}
//前序遍历
void tree_first(node_t* n){
    if(n == NULL){
        return;
    }
    printf("%d ",n->data);
    tree_first(n->left);
    tree_first(n->right);
}
//中序遍历
void tree_mid(node_t* n){
    if(n == NULL){
        return;
    }
    tree_mid(n->left);
    printf("%d ",n->data);
    tree_mid(n->right);
}
//后序遍历
void tree_last(node_t* n){
    if(n == NULL){
        return;
    }
    tree_last(n->left);
    tree_last(n->right);
    printf("%d ",n->data);
}














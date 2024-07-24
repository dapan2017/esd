//calloc函数
#include<stdio.h>
#include<stdlib.h>

int main(void){
    //为数组分配内存
    int* p = calloc(5,sizeof(int));
    if(p == NULL){
        printf("内存分配失败\n");
        return -1;
    }
    //赋值
    for(int i = 0;i < 5;i++){
        p[i] = 100 + i;
    }
    //打印
    for(int i = 0;i < 5;i++){
        printf("%d ",p[i]); 
    }
    printf("\n");
    //释放
    free(p);
    p = NULL;


    return 0;
}


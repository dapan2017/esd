//realloc函数
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int* p = malloc(8);
    if(p == NULL){
        printf("内存分配失败\n");
        return -1;
    }
    p[0] = 1;
    p[1] = 3;
    //修改所分配的存储区
    p = realloc(p,16);
    p[2] = 5;
    p[3] = 7;
    for(int i = 0;i < 4;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    //释放
    free(p);
    p = NULL;
    return 0;
}


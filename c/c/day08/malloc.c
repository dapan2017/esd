//动态内存分配
#include<stdio.h>
#include<stdlib.h>// malloc free

int main(void){
    int* p = malloc(8);
    if(p == NULL){
        printf("动态内存分配失败\n");
        return -1;
    }
    printf("释放前:p = %p\n",p);
    *p = 10;
    *(p + 1) = 20;
    printf("%d %d\n",p[0],p[1]);
    //释放内存
    free(p);
    printf("释放后:p = %p\n",p);
    //printf("%d %d\n",p[0],p[1]);
    p = NULL;
    printf("%d %d\n",p[0],p[1]);
    return 0;
}

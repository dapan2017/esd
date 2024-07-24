//在编译时指定宏
#include<stdio.h>
//gcc -DSIZE=10 define2.c -o define2
int main(void){
    int arr[SIZE] = {};
    for(int i = 0;i < SIZE;i++){
        arr[i] = 100 + i;
    }
    for(int i = 0;i < SIZE;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int* p = NULL;
    int a = 10;
    //p = &a;
    if(p == NULL){
        printf("指针为空,不可用\n"
               "文件:%s\n"
               "函数:%s\n"
               "行号:%d\n"
               "日期:%s\n"
               "时间:%s\n",__FILE__,__FUNCTION__,__LINE__,
               __DATE__,__TIME__);
        return -1;
    }
    printf("*p = %d\n",*p);
    return 0;
}





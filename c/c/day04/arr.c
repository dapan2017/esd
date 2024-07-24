//数组演示
#include<stdio.h>

int main(void){
    //定义数组
    //数组初始化时,元素个数多余数据个数,则未得到数据的元素
    //默认按0初始化
    //初始化,如果未指定元素的个数,那么会根据初始化数据的
    //个数来定元素的个数
    //int arr[5] = {1,3,5,7,9};
    //int arr[5] = {0};
    //int arr[5] = {2};
    //int arr[5] = {};
    //int arr[] = {1,2,3,4,5};
    int arr[5] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i < 5;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    //使用数组元素,通过下标进行区分
    arr[0] = 100;//小明
    arr[1] = 94;//小刚
    arr[2] = 96;//小强
    arr[3] = 98;//小鹏
    arr[4] = 58;//老王
    for(int i = 0;i < 5;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    //打印每个元素的地址
    for(int i = 0;i < 5;i++){
        printf("%p\n",&arr[i]);
    }
    // 数组越界,危险操作
    //printf("arr[5] = %d\n",arr[5]);
    //数组名字,代表数组首元素的地址
    printf("arr = %p\n",arr);
    return 0;
}







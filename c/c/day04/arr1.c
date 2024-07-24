//数组和sizeof
#include<stdio.h>

int main(void){
    int arr[5] = {1,3,5,7,9};
    printf("%lu\n",sizeof(arr));// 数组总大小
    printf("%lu\n",sizeof(arr[3]));// 一个元素大小
    printf("%lu\n",sizeof(arr) / sizeof(arr[3]));// 元素个数
    // 两个元素的地址值相减,得到是两个元素相差的类型的个数
    printf("%ld\n",&arr[3] - &arr[0]);
    printf("&arr[0] = %p\n",&arr[0]);
    printf("&arr[0] + 1 = %p\n",&arr[0] + 1);
    return 0;
}

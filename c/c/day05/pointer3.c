//指针和数组
#include<stdio.h>

int main(void){arr
    int arr[4] = {1,2,3,4};
    // 数组名字代表首元素地址
    // 指针 = 地址
    int* p = arr;
    // 通过指针p,访问首元素的存储区
    printf("*p     = %d\n",*p);
    printf("arr[0] = %d\n",arr[0]);
    *p = 11;
    printf("*p     = %d\n",*p);
    printf("arr[0] = %d\n",arr[0]);
    
    // p+1 表示的是第二个元素的地址
    printf("*(p+1) = %d\n",*(p+1));
    printf("arr[1] = %d\n",arr[1]);
    // p+2 表示的是第三个元素的地址
    // p+3 表示的是第四个元素的地址
    
    // arr+1 表示的是第二个元素的地址
    // p[1] <-> *(p+1) <-> *(arr+1) <-> arr[1]  
    // 通过指针取下标,也可以表示每个元素
    printf("p[1]   = %d\n",p[1]);
    // p值可改
    // arr不可修改
    // arr++;
    // sizeof(arr);//数组的内存总大小 16
    // sizeof(p);  //p的大小 8
    return 0;
}



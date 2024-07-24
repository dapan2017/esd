//交换数据
#include<stdio.h>
//交换数据
void swap(int* pa,int* pb){
    // pa --> &a    pb --> &b
    int cnt = *pa;
    *pa = *pb;
    *pb = cnt;
}

int main(void){
    int a = 3,b = 5;
    printf("交换前:a = %d,b = %d\n",a,b);
    swap(&a,&b);
    printf("交换后:a = %d,b = %d\n",a,b);
    return 0;
}

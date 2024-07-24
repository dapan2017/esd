//sbrk函数演示
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("当前堆尾%p\n",sbrk(0));
    int* p1 = sbrk(4);
    printf("p1 = %p\n",p1);
    *p1 = 100;

    double* p2 = sbrk(8);
    printf("p2 = %p\n",p2);
    *p2 = 6.28;

    printf("%d %lg\n",*p1,*p2);
    //释放
    sbrk(-(4 + 8));

    printf("当前堆尾%p\n",sbrk(0));
    return 0;
}
//NULL地址
#include<stdio.h>

int main(void){
    // p = (nil) nil --> NULL --> 0
    // NULL空地址
    int* p = NULL;// int a = 0;
    printf("p = %p\n",p);
    //printf("*p = %d\n",*p); //段错误
    return 0;
}

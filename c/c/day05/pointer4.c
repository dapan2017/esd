//指针类型
#include<stdio.h>

int main(void){
    int a = 0x12345678;
    short* p = &a;
    printf("*p = 0x%hx\n",*p);
    p++;
    printf("*p = 0x%hx\n",*p);

    char* pc = &a;
    printf("pc[0] = 0x%hhx\n",pc[0]);// *pc
    printf("pc[1] = 0x%hhx\n",pc[1]);// *(pc+1)
    printf("pc[2] = 0x%hhx\n",pc[2]);// *(pc+2)
    printf("pc[3] = 0x%hhx\n",pc[3]);// *(pc+3)
    return 0;
}

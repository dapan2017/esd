//指针的计算
#include<stdio.h>

int main(void){
    char c = 'a';
    char* pc = &c;
    printf("pc = %p\n",pc);
    pc++;
    printf("pc = %p\n",pc);

    short s = 1;
    short* ps = &s;
    printf("ps = %p\n",ps);
    ps++;
    printf("ps = %p\n",ps);

    int i = 1;
    int* pi = &i;
    printf("pi = %p\n",pi);
    pi++;
    printf("pi = %p\n",pi);
    return 0;
}




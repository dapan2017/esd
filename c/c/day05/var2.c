#include<stdio.h>

int g_a = 10;
static int g_b = 20;

void fun(void){
    printf("fun:g_a = %d\n",g_a);
    printf("fun:g_b = %d\n",g_b);
}

static void bar(void){
    printf("bar:g_a = %d\n",g_a);
    printf("bar:g_b = %d\n",g_b);
}

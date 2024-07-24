//字符串的输入和输出
#include<stdio.h>

int main(void){
    /* int a = 0;
     * scanf("%d",&a);
     */
    //char* str = NULL;
    char str[32] = {};
    scanf("%s",str);
    printf("%s\n",str);
    puts(str);
    return 0;
}


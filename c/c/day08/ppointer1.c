//二级指针和字符指针数组
#include<stdio.h>

int main(void){
    char* arr[] = {"咖啡","浓茶"};
    char** pp = arr;
    printf("%s %s\n",*pp,*(pp+1));
    printf("%s %s\n",pp[0],pp[1]);
    return 0;
}

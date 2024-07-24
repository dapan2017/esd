//字符指针数组
#include<stdio.h>

int main(void){
    char* p1 = "abc";
    char* p2 = "def";
    //char* arr[2] = {p1,p2};
    char* arr[2] = {"abc","def"};
    printf("%s\n",arr[0]);
    printf("%s\n",arr[1]);
    return 0;
}

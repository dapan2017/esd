//字符串
#include<stdio.h>

int main(void){
    // "hello" 字符串常量
    // 占内存
    // "hello"  1 串本身内容  2 在内存中的首字节地址
    // %s 配合输出字符串 --> 内存首字节地址
    printf("%s\n","hello\0");
    printf("%s\n","hel\0lo");
    printf("hello\n");

    char* p = "abcde";
    printf("%s\n",p);
    //代码中,相邻的两个小串,编译时,会被编译器自动合成
    //一个大串
    printf("hello"
           "world");
    return 0;
}




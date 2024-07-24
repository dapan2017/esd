#include <stdio.h>

int main(){
    
    char c1 = 127;       //小整数类型
    char c2 = -128;      //
    unsigned c3 = 255;
    char c4 = 'A';      //字符类型,使用单引号括起来
    char c5 = 65;
    //C语言中的char能表示汉字吗?
    //char c6 = '中';  错误!

    printf("小整数:%hhd\n", c2);
    printf("小整数:%hhu\n", c3);
    printf("字符型输出: %c  %c\n", c4, c5);
    printf("数字型输出: %hhd  %hhd\n", c4, c5);
    printf("汉字输出: %c\n", c6);
}

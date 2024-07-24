//段错误演示
#include <stdio.h>

int main() {
    //int* p = (int*)0x12345678;// 物理地址?
    //printf("%d\n", *p); // 尝试读取0x12345678处的内存

    //const int i = 1;//栈区
    const static int i = 1;//代码区(只读常量区)
    //i --> const int   &i --> const int*
    *(int*)&i = 2;
    printf("i = %d\n",i);
    return 0;
}
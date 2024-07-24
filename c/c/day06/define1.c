//带参宏
#include<stdio.h>
//宏替换过程,不涉及类型检查
#define SUB(x,y) ((x) - (y))
#define SQUARE(x) ((x) * (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
int main(void){
    printf("%d\n",SUB(4,1));// (4 - 1)
    printf("%lg\n",SUB(5.2,6.1));//(5.2 - 6.1)

    printf("%d\n",SQUARE(5));
    printf("%d\n",SQUARE(2 + 3));//((2 + 3) * (2 + 3));

    printf("%d\n",MAX(4,9));
//取消宏定义
#undef SUB
    //printf("%d\n",SUB(4,1));//警告

    return 0;
}

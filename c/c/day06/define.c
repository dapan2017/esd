//预处理指令 
#include<stdio.h>
#define PI (3.14159)

int main(void){
    double r = 0;//半径
    printf("请输入一个半径:");
    scanf("%lg",&r);
    printf("圆的面积是%lg\n",PI * r * r);
    printf("圆的周长是%lg\n",2 * PI * r);

    return 0;
}

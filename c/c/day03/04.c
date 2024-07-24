/**
 *输入一个三位整数值,分别输出它的百位/十位/个位上的数字
 *例如: 用户输入了253,  输出: 百位:2  十位:5   个位:3
 **/
#include <stdio.h>

int main(){
    //读取整数型输入
    short num = 0;
    printf("请输入一个三位的整数: ");
    scanf("%hd", &num);

    //拆解出百位/十位/个位
    char bai = num / 100;   //整数除整数,结果是整数
    char shi = num % 100 / 10;
    char ge = num % 10;

    printf("数字%hd百位上的数字:%hhd 十位上的数字:%hhd 个位上的数字:%hhd\n", num, bai, shi, ge);

}

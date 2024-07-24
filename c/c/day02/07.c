/*
键盘输入
*/

#include <stdio.h>

int main(){ 
    //printf("请输入学生姓名:\n");      //如何存储还没学
    printf("请输入学生性别F/M:");
    char sex = 0;
    scanf("%c", &sex);
    
    printf("请输入学生年龄:");
    short age = 0;
    scanf("%hd", &age);

    printf("请输入语文和数学成绩,用空格分割:");
    float chinese = 0;
    float math = 0;
    scanf("%f %f", &chinese, &math);


    printf("学生性别:%c, 年龄:%hd, 语文:%.1f, 数学:%.1f\n",  sex, age, chinese, math);
}

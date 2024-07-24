/*
 创建变量分别表示 两个学生的语文和数学成绩
 输出每个学生的总成绩
 提示:  换行符\n     
 提示:  浮点数类型 float, 输出时占位符 %f
*/
#include <stdio.h>

int main(){
    float stu1Chinese = 95.5;
    float stu1Math = 98;
    float stu2Chinese = 1.245e2;    //124.5
    float stu2Math = 5e-1;          //0.5

    float stu1Total = stu1Chinese + stu1Math;
    float stu2Total = stu2Chinese + stu2Math;

    printf("学生1的总成绩:%f\n", stu1Total);
    printf("学生2的语文:%.1f, 数学:%.1f, 总成绩:%.1f\n", stu2Chinese, stu2Math, stu2Total);   //.1f表示输出一个小数精度为1位的数字
}

//变长数组演示
#include<stdio.h>

int main(void){
    int num = 0;//学生个数
    printf("请输入学生的个数:");
    scanf("%d",&num);
    //定义数组
    float student[num];
    float sum = 0;//总分
    int max = 0;//最高分学生下标
    //循环输入每个学生的成绩
    for(int i = 0;i < num;i++){
        printf("请输入学生的成绩:");
        scanf("%g",&student[i]);
        sum = sum + student[i];
        if(student[max] < student[i]){
            max = i;
        }
    }
    printf("总分是%g\n",sum);
    printf("平均分是%g\n",sum / num);
    printf("第%d个学生分数最高,为%g分\n",max+1,student[max]);
    return 0;
}


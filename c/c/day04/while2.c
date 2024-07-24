//判断数字位数
#include<stdio.h>

int main(void){
    int num = 0;//键盘输入
    int count = 0;//计数
    printf("请输入一个整数:");
    scanf("%d",&num);
    int tmp = num;
    //循环除以10,直到为0结束
    for(;;){
        num = num / 10;
        count++;
        if(num == 0){
            break;
        }
    }
    printf("%d有%d位\n",tmp,count);
    return 0;
}

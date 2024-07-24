/*
创建两个变量分别保存两个整数，设计一个算法，交换这两个变量中的数据值
*/
#include <stdio.h>

int main(){
    int num1 = 1000;
    int num2 = 2000;

    printf("交换前,数字1:%d, 数字2:%d\n", num1, num2);

    //算法1:交换两个数字的值
    //int temp = num1;   //临时变量
    //num1 = num2;
    //num2 = temp;
    
    //算法2:交换两个数字的值
    num1 = num1 + num2;     //n1:3000  n2:2000
    num2 = num1 - num2;     //n1:3000  n2:1000
    num1 = num1 - num2;     //n1:2000  n2:1000
    
    printf("交换后,数字1:%d, 数字2:%d\n", num1, num2);
}



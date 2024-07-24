//计算1 - 100之间的和
#include<stdio.h>

int main(void){
    int sum = 0;//存储最后的累加结果
    for(int i = 1;i <= 100;i++){
        sum = sum + i;
        // sum += i;
    }
    printf("sum = %d\n",sum);
    return 0;
}

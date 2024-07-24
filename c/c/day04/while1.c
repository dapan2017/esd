//while循环
#include<stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(1){//死循环
        sum = sum + i;
        if(i == 100){
            break;
        }
        i++;
    }
    printf("sum = %d\n",sum);
    return 0;
}

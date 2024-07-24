//1-100奇数
#include<stdio.h>

int main(void){
    for(int i = 1;i <= 100;i = i + 2){
        /*if(i % 2 == 0){
            continue;
        }*/
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}

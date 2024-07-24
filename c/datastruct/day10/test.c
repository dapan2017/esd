#include<stdio.h>

int main(void){
    int a = 1;
    printf("%d\n",a);
    printf("%02d\n",a);// 09:04:01  9:4:1
    int b = 0;
    float c= 0;
    scanf("%2d%f",&b,&c);
    printf("%d %f\n",b,c);
    return 0;
}

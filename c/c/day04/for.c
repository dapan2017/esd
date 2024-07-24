//for循环
#include<stdio.h>

int main(void){
    int i;//循环变量
    for(i = 1;i <= 5;i++){
        printf("我吃了%d锅铁锅炖大鹅\n",i);
    }
    printf("i = %d\n",i);
    //变化1
    int j = 0;
    for(;j < 5;j++){
        printf("j = %d\n",j);
    }
    //变化2
    int k = 0;
    for(;k < 5;){
        printf("k = %d\n",++k);
        //k++;
    }
    //变化3 无限死循环
    /*for(;;){
        printf("超哥有点帅!\n");
    }*/
    //变化4
    for(int z = 0;z < 5;z++){
        printf("z = %d\n",z);
    }
    //printf("z = %d\n",z); error z未声明
    return 0;
}








//数组练习
#include<stdio.h>

int main(void){
    int arr[10] = {};
    for(int i = 0;i < 10;i++){
        printf("请输入第%d个数据:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 9;i >= 0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

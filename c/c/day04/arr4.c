//二维数组
#include<stdio.h>

int main(void){
    //定义二维数组并初始化
    //int arr[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    //int arr[4][3] = {{1,2},{3,4},{3,5},{4}};
    //int arr[4][3] = {1,2,3,4,3,5,4};
    int arr[4][3] = {0};
    for(int j = 0;j < 4;j++){//组下标
        for(int i = 0;i < 3;i++){//组内下标
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    printf("%lu\n",sizeof(arr));//总大小 
    printf("%lu\n",sizeof(arr[0]));//一组大小
    printf("%lu\n",sizeof(arr[0][0]));
    return 0;
}






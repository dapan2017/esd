//查找算法
#include<stdio.h>
//顺序查找
int line_find(int num[],int size,int data){
    //依次遍历
    for(int i = 0;i < size;i++){
        if(num[i] == data){
            //找到了
            return i;
        }
    }
    //没找到
    return -1;
}
//折半查找
int half_find(int num[],int size,int data){
    int left = 0;//查找范围的左边界
    int right = size-1;//查找范围的右边界
    while(left <= right){
        int mid = (left + right) / 2;
        if(data < num[mid]){
            //向左找
            right = mid - 1;
        }else if(data > num[mid]){
            //向右找
            left = mid + 1;
        }else{
            //找到了
            return mid;
        }
    }
    return -1;
}


int main(void){
    int num[] = {1,2,3,4,5,6,7,8,9};
    //int res = line_find(num,9,7);
    int res = half_find(num,9,7);
    printf("下标是%d\n",res);
    return 0;
}





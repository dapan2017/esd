//读取数据
#include<stdio.h>

int main(void){
    //打开文件
    FILE* fp = fopen("./shared.txt","r");
    if(fp == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    //读取数据
    int a[8] = {};
    int size = fread(a,sizeof(int),8,fp);
    printf("读取到%d个元素\n",size);
    for(int i = 0;i < 8;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //关闭文件
    fclose(fp);
    fp = NULL;
    return 0;
}





//向文件写入数据
#include<stdio.h>

int main(void){
    //打开文件
    FILE* fp = fopen("./shared.txt","w");
    if(fp == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    //写入数据
    int a[8] = {1,2,3,4,5,6,7,8};
    int size = fwrite(a,sizeof(int),8,fp);
    printf("实际写入%d个元素\n",size);
    //关闭文件
    fclose(fp);
    fp = NULL;

    FILE* fpp = fopen("./shared.txt","r");
    if(fpp == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    //读取数据
    int aa[8] = {};
    int rsize = fread(aa,sizeof(int),8,fpp);
    printf("读取到%d个元素\n",rsize);
    for(int i = 0;i < 8;i++){
        printf("%d ",aa[i]);
    }
    printf("\n");
    //关闭文件
    fclose(fpp);
    fpp = NULL;

    return 0;
}





//文件的打开和关闭
#include<stdio.h>

int main(void){
    //打开文件
    FILE* fp = fopen("./a.txt","w");
    if(fp == NULL){
        printf("文件打开失败\n");
        return -1;
    }

    //关闭文件
    fclose(fp);
    fp = NULL;
    return 0;
}

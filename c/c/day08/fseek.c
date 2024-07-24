//文件读写未知
#include<stdio.h>

int main(void){
    //打开文件
    FILE* fp = fopen("./shared.txt","w+");
    if(fp == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    //写入数据
    int a[8] = {1,2,3,4,5,6,7,8};
    int size = fwrite(a,sizeof(int),8,fp);
    printf("实际写入%d个元素\n",size);
    //  1   2   3   4   5   6   7   8
    // --------------------------------
    
    //获取当前读写位置
    long pos = ftell(fp);
    printf("读写位置%ld\n",pos);
    //读 4,5
    fseek(fp,12,SEEK_SET);
    int b[2] = {};
    fread(b,sizeof(int),2,fp);
    printf("%d %d\n",b[0],b[1]);
    //关闭文件
    fclose(fp);
    fp = NULL;


    return 0;
}





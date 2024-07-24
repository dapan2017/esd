//fprintf fscanf
#include<stdio.h>

int main(void){
    //打开文件
    FILE* fw = fopen("./out.txt","w");
    if(fw == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    fprintf(fw,"马上就放假啦啦啦\n");
    int a = 10;
    double b = 3.14;
    fprintf(fw,"a = %d,b = %lg\n",a,b);
    fclose(fw);
    fw = NULL;

    // in.txt  ---->  100 3.14 哈哈哈
    int i = 0;
    double d = 0.0;
    char c[12] = {};
    FILE* fr = fopen("./in.txt","r");
    if(fr == NULL){
        printf("文件打开失败\n");
        return -1;
    }
    fscanf(fr,"%d%lg%s",&i,&d,c);
    printf("i = %d,d = %lg,c = %s\n",i,d,c);
    fclose(fr);
    fr = NULL;
    return 0;
}




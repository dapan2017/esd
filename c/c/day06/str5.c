//main函数参数
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
    // ./str5 -l hello 123
    // argc 命令行参数个数
    // argv[0] ---> "./str5"
    // argv[1] ---> "-l"
    // argv[2] ---> "hello"
    // argv[3] ---> "123"
    // argv[4] ---> NULL
    for(int i = 0;i < argc;i++){
        printf("%s\n",argv[i]);
    }
    // ./str5 123
    int a = atoi(argv[1]);
    printf("a = %d\n",a);
    return 0;
}

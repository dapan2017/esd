//信号集
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
//打印一个字节的8位内容
void printb(char byte){
    for(int i = 0;i < 8;i++){
        printf("%d",byte & 1 << 7 - i ? 1 : 0);
    }
    printf(" ");//空格
}
//把一块存储区所有字节比特位都打出来
void printm(void* buf,size_t size){
    for(int i = 0;i < size;i++){
        printb(((char*)buf)[size-1-i]);
        if((i+1) % 8 == 0){
            printf("\n");
        }
    }
}
int main(void){
    //信号集
    sigset_t set;
    //填满信号集
    sigfillset(&set);
    printm(&set,sizeof(set));
    //清空信号集
    sigemptyset(&set);
    printm(&set,sizeof(set));
    //添加一个信号到信号集
    sigaddset(&set,SIGINT);
    printm(&set,sizeof(set));
    //删除一个信号到信号集
    sigdelset(&set,SIGINT);
    printm(&set,sizeof(set));
    //测试一个信号是否在信号集中
    printf("信号集中%s2号信号\n",
            sigismember(&set,SIGINT) ? "有" : "无");
    
    return 0;
}
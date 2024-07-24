#include<stdio.h>
#include<stdlib.h>//malloc()
#include<errno.h>// int errno;
#include<string.h>// strerror()
int main(){
    //失败
    int *p = (int*)malloc(0xffffffffffffffff);

    /*if(p == NULL){
        printf("errno = %d\n",errno);
        printf("malloc: %s\n",strerror(errno));
        perror("malloc");
        return -1;
    }
    free(p);
    p = NULL;*/
    FILE* fp = fopen("test.c","r");
    if(fp == NULL){
    //if(errno != 0){
        perror("fopen");
        return -1;
    }
    return 0;
}




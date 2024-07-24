#include<stdio.h>

int main(int argc, char* argv[],char* envp[]){
    //表示数组首元素的地址
    extern char** environ;
    /*for(char** ptr = environ; *ptr != NULL; ptr++){
        printf("%s\n", *ptr);
    }*/
    for(char** ptr = envp; *ptr != NULL; ptr++){
        printf("%s\n", *ptr);
    }
    printf("environ:%p\n", environ);
    printf("envp:%p\n", envp);
    return 0; //return type is int
}
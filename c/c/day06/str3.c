//字符串操作函数
#include<stdio.h>
#include<string.h>// strlen(),strcat(),ctrcpy(),strcmp()

int main(void){
    // 计算有效字符个数,不包含'\0'
    char* str1 = "hello";
    char str2[10] = "hello";
    printf("%lu\n",strlen(str1));
    printf("%lu\n",strlen(str2));
    printf("%lu\n",sizeof(str1));
    printf("%lu\n",sizeof(str2));
    
    //char* str3 = "abc";//abcdef
    char str3[10] = "abc";
    char* str4 = "def";
    strcat(str3,str4);
    printf("%s\n",str3);

    char str5[10] = {};
    strcpy(str5,"xyz");
    printf("%s\n",str5);
    strcpy(str5,"abc");
    printf("%s\n",str5);

    char* str6 = "abcde";
    char* str7 = "abcda";
    int res = strcmp(str6,str7);
    printf("res = %d\n",res);
    return 0;
}





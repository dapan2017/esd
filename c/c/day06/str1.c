//字符串和指针
#include<stdio.h>

int main(void){
    char* str = "hello";
    printf("%s\n",str);//hello
    printf("%s\n",str + 1);// ello
    printf("%c %c %c\n",*str,*(str+2),*(str+4));
    printf("%c %c %c\n",str[0],str[2],str[4]);
    //*str = 'H';//字符串常量,自身内容不允许修改
    printf("%s\n",str);
    
    char arr[] = {'h','e','l','l','o','\0'};
    printf("%s\n",arr);
    arr[0] = 'H';
    printf("%s\n",arr);

    char arr1[] = "good";
    printf("%s\n",arr1);
    arr1[0] = 'G';    
    printf("%s\n",arr1);
    printf("%lu\n",sizeof(arr1));

    arr1 = "abcd";
    return 0;
}





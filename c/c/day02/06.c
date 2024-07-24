/*
 *不同数据类型所占的字节数
*/

#include <stdio.h>

int main(){ 
    char n1 = 127;
    unsigned char n2 = 255;
    short n3 = 32767;
    unsigned short  n4 = 65535;
    int n5 = 2147483647;
    unsigned int n6 = 4294967295;
    long n7 = 9223372036854775807L;
    //unsigned long n8 = 18446744073709551615LL;
    unsigned long n8 = 9223372036854775807L;

    float n9 = 3.40282e+38;
    double n10 = 1.79769e+308;


    //注意:sizeof返回的数据类型不是int,而是unsigned long
    printf("小整数所占的字节数:%lu\n", sizeof(char));
    printf("小整数所占的字节数:%lu\n", sizeof(n1));
    printf("无符号小整数所占的字节数:%lu\n", sizeof(n2));
    printf("短整数所占的字节数:%lu\n", sizeof(n3));
    printf("无符号短整数所占的字节数:%lu\n", sizeof(n4));
    printf("整数所占的字节数:%lu\n", sizeof(n5));
    printf("无符号整数所占的字节数:%lu\n", sizeof(n6));
    printf("长整数所占的字节数:%lu\n", sizeof(n7));
    printf("无符号整数所占的字节数:%lu\n", sizeof(n8));
    printf("单精度浮点型所占的字节数:%lu\n", sizeof(n9));
    printf("双精度浮点型所占的字节数:%lu\n", sizeof(n10));
}

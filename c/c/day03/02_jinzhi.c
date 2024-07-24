/**
 **/
#include <stdio.h>

int main(){
    //int num = 65;     //十进制
    //int num = 065;    //八进制
    int num = 0x65;     //十六进制
 
    printf("数字65输出为八进制: %o 十进制:%d 十六进制:%x\n", num, num, num); //octal  decimal  hex
    printf("数字65输出为八进制: %#o 十进制:%d 十六进制:%#x\n", num, num, num); //octal  decimal  hex

}

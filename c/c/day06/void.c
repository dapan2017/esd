//泛型指针
#include<stdio.h>

int main(void){
    //强制类型转换 强转
    int a = 0x12345678;
    char b = (char)a;
    printf("0x%hhx\n",b);

    void* p = &a;
    printf("0x%x\n",*(int*)p);
    printf("0x%hx\n",*(short*)p);
    printf("0x%hhx\n",*(char*)p);
    return 0;
}

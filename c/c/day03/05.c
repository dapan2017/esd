
#include <stdio.h>

int main(){
    float price = 1.5;

    int canBuy = price <= 3;  //比较运算的结果是"布尔",用0表示假, 非0表示真

    printf("这款商品咱能买吗? %d\n", canBuy);
}

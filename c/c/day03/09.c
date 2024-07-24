/**
 * */
#include <stdio.h>

int main(){
    //公园门票原价是10块钱,如果是老人和小孩儿,八折优惠
    //输入游客的年龄,输出应付的门票价格
    unsigned char age = 0;      //年龄
    printf("请游客输入年龄:");
    scanf("%hhu", &age);

    float price = 10;           //门票价格
    //price = (age>=60||age<6)  ?  price*0.8  :  price ;
    price = (age>=6 && age<60)  ?  price  :  price*0.8 ;

    printf("该游客需要缴纳的门票费用:%.2f\n", price);
}

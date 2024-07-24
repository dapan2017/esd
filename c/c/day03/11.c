/**
 * */
#include <stdio.h>

int main(){
    //公园门票原价是10块钱,如果是老人和小孩儿,八折优惠; 否则打九折
    //输入游客的年龄,输出应付的门票价格
    unsigned char age = 0;      //年龄
    printf("请游客输入年龄:");
    scanf("%hhu", &age);

    float price = 10;           //门票价格
    //如果(年龄满足老幼条件){
    //    价格打八折
    //}否则 {
    //    价格打九折
    //}
    if( age<6 || age>=60 ){
        price *= 0.8;
        printf("执行了老幼优惠政策\n");
    }else {
        price *= 0.9;
        printf("执行了成人优惠政策\n");
    }

    printf("该游客需要缴纳的门票费用:%.2f\n", price);
}

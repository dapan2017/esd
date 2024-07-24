/**
 * 请用户输入一个订单的状态:
 * 10 表示 待付款
 * 20 表示 待发货
 * 30 表示 运输中
 * 40 表示 派货中
 * 50 表示 已签收
 * 其它 表示 未知的订单状态
 * */
#include <stdio.h>

int main(){
    unsigned char status = 0;      //订单状态
    printf("请输入一个订单状态对应的数字:");
    scanf("%hhu", &status);

    //根据订单状态的值,输出对应的说明字符串
    /*if(status==10){
        printf("订单状态:待付款");
    }else if(status==20){
        printf("订单状态:待发货");
    }else if(status==30){
        printf("订单状态:运输中");
    }else if(status==40){
        printf("订单状态:派送中");
    }else if(status==50){
        printf("订单状态:已签收");
    }else {
        printf("未知的订单状态");
    }*/

    switch( status ){
        case  10:
            printf("待付款");
            break;
        case  20:
            printf("待发货");
            break;
        case 30:
            printf("运输中");
            break;
        case 40:
            printf("派送中");
            break;
        case 50:
            printf("已完成");
            break;
        default:
            printf("未知的订单状态");
    }

    printf("\n");
}

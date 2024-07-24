/**
 *输入整数值,判断小时/分钟/秒钟
 **/
#include <stdio.h>

int main(){
    //读取整数型输入
    int time = 0;
    printf("请输入一个秒钟数值: ");
    scanf("%d", &time);

    //拆解出小时/分钟/秒钟
    int hour = time / 3600;
    int minute = (time-hour*3600) / 60;
    int second = time - hour*3600 - minute*60;

    printf("上述时间值: %d小时%d分钟%d秒钟\n", hour, minute, second);

}

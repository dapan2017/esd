//随机数
#include<stdio.h>
#include<stdlib.h>//rand()
#include<time.h>// time()
int main(void){
    //随机数种子,种子不同,得到一系列随机数则不同
    //时间 --> 种子 --> 一系列随机数
    time_t now = time(0);
    srand(now);
    for(int i = 0;i < 5;i++){
        int res = rand();
        printf("%d\n",res);
    }
    return 0;
}

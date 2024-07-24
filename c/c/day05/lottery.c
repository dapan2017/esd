//双色球
//红球 1 - 33 之间 6个 不重复
//蓝球 1 - 16 之间 1个
#include<stdio.h>
#include<stdlib.h>// rand()  srand()
#include<time.h>// time()

int main(void){
    //种随机数种子
    time_t now = time(0);
    srand(now);
    int blue = rand() % 16 + 1;// 蓝球
    int red[6] = {0};//红球
    for(int i = 0;i < 6;i++){
        int val = rand() % 33 + 1;
        //和已经确定的红球数字做对比,
        //如果和之前的都不一样,可用
        //如果和之前的某个一样,不可用,重新生成
        int j;
        for(j = 0;j < i;j++){
            if(val == red[j]){
                i--;
                break;
            }
        }
        //循环结束,j < i 说明重复,j == i,没有重复
        if(j == i){
            red[i] = val;
        }
    }
    printf("红球: ");
    for(int i = 0;i < 6;i++){
        printf("%d ",red[i]);
    }
    printf("\n");
    printf("蓝球: %d\n",blue);
    return 0;
}







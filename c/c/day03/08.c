/**
 * */
#include <stdio.h>

int main(){
    int height = 185;           //身高
    float money = 2000;        //存款数额
    char face = 'B';            //颜值等级,A级最帅


    //判定:这个人算是"高富帅"吗?
    int acceptThisMan = 
        //(height>=180) && (money>=10000) && (face<='C');
        (height>=180) && (money>=10000) && (face=='A'||face=='B'||face=='C');

    printf("这个男人可被挑剔的超哥接受吗:%d\n", acceptThisMan);
}

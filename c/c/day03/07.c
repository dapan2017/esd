/**
 *请用户从键盘输入自己的年龄, 据此输出:
 *  您尚未成年,不能工作!
 *  欢迎您来上班
 *  抱歉!您该退休了!
 * */
#include <stdio.h>

int main(){
    char age = 0;
    printf("欢迎来应聘,请输入您的年龄:");
    scanf("%hhd", &age);

    //int result = age<18 ? 10 : (age<60?20:30) ;
    //printf("年龄的判定结果:%d\n", result);
    
    printf("年龄的判定结果:%s\n", 
        age<18 ? "尚未成年!不能上班" : (
            age<60 ? "欢迎来上班!" : "您该退休啦!"
        )        
    );
}


#include <stdio.h>

int main(){
    char age = 2;

    printf("该用户年龄的状态: %s \n", 
            age>=18 ? "成年人" : "未成年"  
    );
    printf("该用户年龄的状态: %d \n", 
            age>=18 ? 100 : 200  
    );
}

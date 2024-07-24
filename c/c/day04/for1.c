//break 和 continue
#include<stdio.h>

int main(void){
    for(int i = 0;i < 5;i++){
        printf("i = %d\n",i);    
        if(i == 2){
            //break;
            continue;
        }
        //  .....
        //  printf("i = %d\n",i);
    }
    return 0;
}

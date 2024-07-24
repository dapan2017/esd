//排序算法
#include<stdio.h>
/*void bubblen(int arr[],int size){
    int i = size - 1;
    for(;i>0;i--){
        int j = i;
        int t = 0;
        for(;j > 0;j--){
            if(arr[j] < arr[j-1]){
                t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }

        for(int k = 0;k < size;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
}*/

//冒牌排序
void bubble(int* arr,int size){
    int i,j;
    for(i = size-1;i > 0;i--){
        for(j = 0;j < i;j++){
            //交换
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
//插入排序
void insert(int arr[],int size){
    int i,j;
    int key;//存储要比较的数
    //从第二个数开始比较
    for(i = 1;i < size;i++){
        key = arr[i];
        for(j = i-1;j >= 0;j--){
            //如果前面的元素比key大,前面元素后移
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        //当循环结束,确定了key要插入的位置
        arr[j+1] = key;
    }
}
//选择排序
void select(int arr[],int size){
    int i,j;
    int min;//记录最小元素的下标
    for(i = 0;i < size-1;i++){
        min = i;//初始默认下标i的元素最小
        for(j = i+1;j < size;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        //循环结束,min记录的最小元素下标
        //交换元素,将最小的交换到下标i处
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}
//快速排序
void quick(int num[],int start,int end){
    int i = start;//起始下标,往后找
    int j = end;//终止下标,往前找
    int x = num[start];//基准
    int tmp;
    while(i < j){
        //从头往后找,比基准小就继续
        while(num[i] < x){
            i++;
        }//循环结束,i的位置,大于等于基准
        //从后往前找,比基准大就继续
        while(num[j] > x){
            j--;
        }//循环结束,j的位置,小于等于基准
        //交换位置
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }

    //递归处理,前面后后面的两部分
    if(start < j){
        quick(num,start,j-1);
    }
    if(end > i){
        quick(num,i+1,end);
    }    
}

int main(int argc,char* argv[]){
    int num[] = {40,20,70,60,80,10,50,90,30};
    //bubble(num,9);
    //insert(num,9);
    //select(num,9);
    quick(num,0,8);
    for(int i = 0;i < 9;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}


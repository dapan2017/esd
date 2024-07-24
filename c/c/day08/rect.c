//计算矩形
#include<stdio.h>
//表示点
typedef struct {
    int x;
    int y;
}pt_t;

typedef struct{
    pt_t p1;
    pt_t p2;
}rect_t;

int main(void){
    rect_t r;
    printf("请输入第一个点的横纵坐标:");
    scanf("%d%d",&r.p1.x,&r.p1.y);
    printf("请输入第二个点的横纵坐标:");
    scanf("%d%d",&r.p2.x,&r.p2.y);
    int area = (r.p1.x - r.p2.x) * (r.p1.y - r.p2.y);
    printf("矩形面积是%d\n",area > 0 ? area : 0 - area);
    return 0;
}








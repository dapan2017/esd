// 引用 和 指针 的差别
#include <iostream>
using namespace std;

int main( void ) {
    int a=10, b=20;

    int* p = &a; // 指针可以不做初始化,也可做初始化
    p = &b; // 指针的目标内存可以随意变更

    int& r = a; // 引用必须初始化
    cout << r << endl;
    r = b; // 这句代码不会变更 r 所引用的目标内存
    cout << r << endl;
    int** ppa = &p; // 存在二级指针
//  int&& rra = r; // 不存在二级引用

    int*& rpa = p; // 存在指针的引用
//  int&* pra = &r; // 不存在引用的指针

    int x,y,z;
    int* arr[3] = {&x,&y,&z}; // 存在指针的数组
//  int& rra[3] = {x,y,z}; // 不存在引用的数组
    
    int m[3];
    int(&q)[3] = m;// 存在数组的引用

    return 0;
}







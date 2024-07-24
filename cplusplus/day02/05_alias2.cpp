// 左值/右值 和 引用
#include <iostream>
using namespace std;
int foo() {
    int m=10;
    return m;
}
int main( void ) {
// 当前作用域的生命期
// 具名内存-->能够取址-->左值|非常左值(无const修饰)
//                           |常左值  (有const修饰)
    int a = 10;
    int& ra = a; // ok
    const int& cra = a; // ok

    const int b = 10;
//  int& rb = b; // err
    const int& crb = b; // ok

// 语句级的生命期(引用可以延长右值的生命期)
// 匿名内存-->不能取址-->右值|98/03标准给出的结论:更改右值毫无意义
//                           |
    const int& ri = 10; // 

    const int& rf = /*|10|*/ foo(); // (1)分配一块匿名内存 (2)生成跳转指令
    
    return 0;
}







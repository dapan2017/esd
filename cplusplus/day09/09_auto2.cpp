// auto 和 引用  联合使用
#include <iostream>
#include <typeinfo>
using namespace std;
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    int a = 10;
    const int b = 10;

    auto c = a;
    // auto: int      c: int
    cout << "c的类型:" << typeid(c).name() << endl; // i
    cout << "&c:" << &c << ", &a:" << &a << endl;  // 地址不同
    c++; // 允许更改

    auto& d = a;
    // auto: int      d: int&
    cout << "d的类型:" << typeid(d).name() << endl; // i
    cout << "&d:" << &d << ", &a:" << &a << endl;  // 地址相同
    d++; // 允许更改

    auto& e = b;//指明按引用推导，目标带有常属性，则可以自动推导出const (2)
    // auto: const int      e: const int&
    cout << "e的类型:" << typeid(e).name() << endl; // i
    cout << "&e:" << &e << ", &b:" << &b << endl;  // 地址相同
//  e++; // 不允许更改

    return 0;
}







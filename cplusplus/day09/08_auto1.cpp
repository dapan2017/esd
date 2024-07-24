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

    auto d = b;
    // auto: int      d: int
    cout << "d的类型:" << typeid(d).name() << endl; // i
    cout << "&d:" << &d << ", &b:" << &b << endl;  // 地址不同
    d++; // 允许更改

    const auto e = b;
    // auto: int      e: const int
    cout << "e的类型:" << typeid(e).name() << endl; // i
    cout << "&e:" << &e << ", &b:" << &b << endl;  // 地址不同
//  e++; // 不允许更改

    auto f = &b; // 如果初始化数据的类型为常指针则可以自动推导出const (1)
    // auto: const int*      f: const int*
    cout << "f的类型:" << typeid(f).name() << endl; // PKi
//  *f = 888; // 不允许更改
    f = NULL;
    return 0;
}







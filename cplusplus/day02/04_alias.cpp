// 引用
#include <iostream>
using namespace std;
int main( void ) {
    int a = 10;
    int& b = a;//不要理解为利用a的数据给b赋值,应该理解为b是a所代表内存的别名

    b = 20; // 表面看是对引用b赋值,其实是对引用b的目标内存(a)赋值
    cout << "a=" << a << ", b=" << b << endl;
            // 表面看是读取引用b的值,其实读取的是引用b的目标内存(a)的值
    cout << "&a:" << &a << ", &b:" << &b << endl;
            // 表面看是取引用b的地址,其实取的是引用b的目标内存(a)的地址

    int c = 30;
    b = c;
    cout << "a=" << a << endl;
    cout << "&a:" << &a << ", &b:" << &b << ", &c:" << &c << endl;
    
    int& d = b; // 不要理解为引用的引用,而应该理解b和d都是a的别名
    cout << "&a:" << &a << ", &b:" << &b << ", &d:" << &d << endl;

    const int e = 10;
//  int& f = e; // err,别名不可以比真名限定的更加宽松
    const int& g = e; // ok

    const int& h = a; // ok,别名可以比真名限定的更加严格
    return 0;
}







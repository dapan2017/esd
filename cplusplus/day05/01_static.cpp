// 静态成员变量
#include <iostream>
using namespace std;
// 普通成员变量:属于对象,对象的生命期      
// 静态成员变量:不属于对象,进程级生命期
class A {
public:
    A() {
        //【int m_i;】
    }
    int m_i; // 声明
    static int m_si; // 声明
};
int A::m_si = 0; // 全局域定义--进程级生命期

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A a, b; // 静态成员变量不在对象中保存--不属于对象
    cout << "a对象的大小:" << sizeof(a) << endl; // 4
    cout << "b对象的大小:" << sizeof(b) << endl; // 4

    A::m_si = 100;//受到类的约束 和 访问控制限定符的约束 -- 属于类

    a.m_si = 666; // A::m_si=666
    cout << "b.m_si=" << b.m_si << endl; // A::m_si
    // 静态成员变量 被该类的所有对象 共享
    return 0;
}









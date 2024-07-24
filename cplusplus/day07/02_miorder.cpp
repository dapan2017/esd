// 多重继承
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A()" << endl; }
    ~A() { cout << "~A()" << endl; }
    int m_a;
};
class B {
public:
    B() { cout << "B()" << endl; }
    ~B() { cout << "~B()" << endl; }
    int m_b;
};
class C { 
public:
    C() { cout << "C()" << endl; }
    ~C() { cout << "~C()" << endl; }
    int m_c;
};
class D : public A, public B, public C { // 汇聚子类
public:
    D() {
        //【A();】
        //【B();】
        //【C();】
        //【int m_d;】
    }
    ~D() {
        // ~C();
        // ~B();
        // ~A();
        // ....
    }
    int m_d;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    D d; // |A基类子对象|B基类子对象|C基类子对象|m_d|->|m_a|m_b|m_c|m_d|
    cout << "汇聚子类对象d的大小:" << sizeof(d) << endl; // 16

    D* pd = &d;
    cout << "整个汇聚子类对象首地址 D* pd:" << pd << endl;

    cout << "A基类子对象的首地址:" <<  &d.m_a << endl;
    cout << "B基类子对象的首地址:" <<  &d.m_b << endl;
    cout << "C基类子对象的首地址:" <<  &d.m_c << endl;
    cout << "D类自己的成员  &m_d:" <<  &d.m_d << endl;
    return 0;
}






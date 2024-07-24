// 多重继承的类型转换
#include <iostream>
using namespace std;
class A {
public:
    int m_a;
};
class B {
public:
    int m_b;
};
class C { 
public:
    int m_c;
};
class D : public A, public B, public C { // 汇聚子类
public:
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

    cout << "-----------------隐式转换---------------------" << endl;
    A* pa = pd;
    cout << "D* pd--->A* pa: " << pa << endl;
    B* pb = pd;
    cout << "D* pd--->B* pb: " << pb << endl;
    C* pc = pd;
    cout << "D* pd--->C* pc: " << pc << endl;
    
    cout << "-----------------静态转换---------------------" << endl;
    D* p1 = static_cast<D*>(pa);
    cout << "A* pa--->D* p1: " << p1 << endl;

    D* p2 = static_cast<D*>(pb);
    cout << "B* pb--->D* p2: " << p2 << endl;

    D* p3 = static_cast<D*>(pc);
    cout << "C* pc--->D* p3: " << p3 << endl;
    return 0;
}






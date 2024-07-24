// 公有继承独有特点:
// (1)只有在公有继承下，子类对象在类外 可以访问基类的公有成员(其他继承不可以)
//    如果被子类同名表示符隐藏，可以借助作用域限定符指明访问基类的
#include <iostream>
using namespace std;
class Base {
public: // 原始标记
    int m_a;
    void foo() { cout << "Base::foo" << endl; }
protected: // 原始标记
    int m_b;
    void bar() { cout << "Base::bar" << endl; }
private: // 原始标记
    int m_c;
    void hum() { cout << "Base::hum" << endl; }
};
class Derived : public Base {
/*
子类对基类成员的访控限定做重新标记 m_a/foo是public m_b/bar是protected m_c/hum是private
*/
public:
    void foo() { cout << "Derived::foo" << endl; }
private:
    int m_d;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Derived d; 
    // 利用子类对象在类外访问基类的成员,编译器需要查看这些成员在子类中重新标记
    d.m_a = 1000; // ok
    d.Base::foo();      // ok**********
    return 0;
}









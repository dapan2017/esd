// 私有继承
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
class Derived : private Base {
/*
子类对基类成员的访控限定做重新标记 m_a/foo是private  m_b/bar是private m_c/hum是private
*/
public:
    void fun() { // 子类内部访问基类的成员,编译器需要查看这些成员在基类中的原始标记
        m_a = 100; // ok
        foo();     // ok
        m_b = 200; // ok
        bar();     // ok
//      m_c = 300; // err
//      hum();     // err
    }
private:
    int m_d;
};
class Grandson : public Derived {
public:
    void boo() {
//        m_a;  // err
//        foo();// err
//        m_b;  // err
//        bar();// err
//        m_c;  // err
//        hum();// err
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Derived d; 
    // 利用子类对象在类外访问基类的成员,编译器需要查看这些成员在子类中重新标记
//    d.m_a = 1000; // err
//    d.foo();      // err
//    d.m_b = 2000; // err
//    d.bar();      // err
//    d.m_c = 3000; // err
//    d.hum();      // err
    return 0;
}









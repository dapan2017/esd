// 继承最基本的特点:
// (1) 子类对象 内部包含 基类(子)对象
// (2) 子类内部 可以直接访问 基类的非私有(公有/保护)成员(变量/函数)
#include <iostream>
using namespace std;
class Base {
public:
    int m_a;
    void foo() { cout << "Base::foo" << endl; }
protected:
    int m_b;
    void bar() { cout << "Base::bar" << endl; }
private:
    int m_c;
    void hum() { cout << "Base::hum" << endl; }
};
//class Derived : public Base {
//class Derived : protected Base {
class Derived : private Base {
public:
    void fun() {
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
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Base b; // 基类对象-->|m_a m_b m_c|
    cout << "基类对象b的大小: " << sizeof(b) << endl; // 12

    Derived d; // 子类对象-->|基类子对象|m_d|-->|m_a m_b m_c|m_d|
    cout << "子类对象d的大小: " << sizeof(d) << endl; // 16
    return 0;
}









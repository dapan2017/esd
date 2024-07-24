// 继承最基本的特点:
// (3) 子类 与 基类 的同名表示符 为隐藏关系
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
class Derived : public Base {
//class Derived : protected Base {
//class Derived : private Base {
public:
    void fun() {
        Base::foo();     // ok
        bar();     // ok
    }
private:
    int m_d;
    void foo() { cout << "Derived::foo" << endl; }
    void bar() { cout << "Derived::bar" << endl; }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Derived d;
    d.fun();
    return 0;
}









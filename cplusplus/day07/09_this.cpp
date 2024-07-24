// this 和 多态
#include <iostream>
using namespace std;
class Base {
public:
    virtual void vfun() { cout << "Base::vfun" << endl; }
    void foo( /* Base* this */ ) {
        cout << "foo函数中调用的为: ";
        this->vfun();
    }
    Base( /* Base* this */ ) {
        cout << "构造函数中调用的为: ";
        this->vfun();
    }
    ~Base( /* Base* this */ ) {
        cout << "析构函数中调用的为: ";
        this->vfun();
    }
};
class Derived : public Base {
public:
    void vfun() { cout << "Derived::vfun" << endl; }
    Derived() {
        //【Base();】定义 基类子对象,利用 基类子对象.Base()
    }
    ~Derived() {
        // 对于 基类子对象,利用 基类子对象.~Base()
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Derived d; // 定义d,利用d.Derived()
    d.foo(); // foo( &d )
    return 0;
} // d.~Derived() 






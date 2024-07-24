// 类模板中的 虚函数
#include <iostream>
using namespace std; 
template<typename T>class Base {
public:
    virtual void foo() { cout << "Base<T>::foo" << endl; }
//  virtual template<typename R>void bar() {} // 为什么成员函数模板不能是虚的
};
template<typename T,typename D>class Derived : public Base<T> {
public:
    void foo() { cout << "Derived<T,D>::foo" << endl; }
};
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Derived<int,double> d;//一旦子类模板实例化为类,那么基类模板自然实例化为类Base<int>
    Base<int>* pbase = &d;
    pbase->foo();
    pbase->bar<float>(); // bar函数才出现
    return 0;
}










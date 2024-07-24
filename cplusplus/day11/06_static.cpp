// 类模板的静态成员:不是类模板拥有，也不是类对象拥有，而是实例化出的每个真正的类拥有
#include <iostream>
using namespace std;
template<typename T>
class A {
public:
    static T m_t; // 静态成员变量 (声明)
    static void foo() { cout << "A<T>::foo" << endl; } // 静态成员函数
};
template<typename T> T A<T>::m_t = T(); // 定义
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    A<int> x, y;
    cout << "&A<int>::m_t: " << &A<int>::m_t << endl;
    cout << "&x.m_t:" << &x.m_t << endl;
    cout << "&y.m_t:" << &y.m_t << endl;
    A<int>::foo();
    x.foo();
    y.foo();

    A<double> m,n;
    cout << "&A<double>::m_t: " << &A<double>::m_t << endl;
    cout << "&m.m_t:" << &m.m_t << endl;
    cout << "&n.m_t:" << &n.m_t << endl;
    A<double>::foo();
    m.foo();
    n.foo();
    return 0;
}










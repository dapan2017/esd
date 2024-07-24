// 静态成员变量 和 静态成员函数
#include <iostream>
using namespace std;
class A {
public:
    int m_i; // 普通成员变量
    void foo( /* const A* this */ ) const { // 普通成员函数
        cout << "A::foo" << endl;
        cout << m_i << endl;  // ok
        cout << m_si << endl; // ok
        bar();                // ok
//      以上三行代码证明:非静态成员函数内部即可访问非静态成员也可访问静态成员
    }
    static int m_si; // 静态成员变量
    static void bar( /*无this参数*/ ) /*const*/ { // 静态成员函数
        cout << "A::bar" << endl;
        cout << m_si << endl; // ok
//      cout << m_i << endl;  // err
//      foo();                // err  
//      以上三行代码证明静态成员函数内部 只能访问 静态成员
    }
};
int A::m_si = 0;
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A a, b; 
    a.foo(); // foo(&a)
    b.foo(); // foo(&b)

    A::bar(); // 属于类
    a.bar();  // A::bar()
    b.bar();  // A::bar()
    return 0;
}









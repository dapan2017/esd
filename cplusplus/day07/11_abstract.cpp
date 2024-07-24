// 纯虚函数 和 抽象类
#include <iostream>
using namespace std;

class A { // 抽象类
public:
    virtual void foo() = 0; // 纯虚函数
};
class B : public A {
public:
    void foo() {
        // ...
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
//  A a;
//  new A;
    
    B b;
    new B;

    return 0;
}





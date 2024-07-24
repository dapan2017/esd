// 捕获异常的几点建议
#include <iostream>
using namespace std;
class A {
public:
    A() {}
    A( const A& that ) { cout << "A类的拷贝构造函数被调用" << endl; }
    ~A() {}
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
void foo() {
//    A a;
//    throw a;
    throw A();
}
int main( void ) {
    try {
        foo();
    }
    catch( A& e ) {
        // ...
    }
    return 0;
}






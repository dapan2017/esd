// 不要在析构函数中 主动 抛出异常,如果被动抛出异常，就在析构函数将其捕获即可.
#include <iostream>
using namespace std;
void foo() {
    throw "foo函数中抛出的异常";
}
void bar() {
    throw "bar函数中抛出的异常";
}
class A {
public:
    ~A() {
        try {
            bar();
        }
        catch( const char* e ) {
            cout << "析构函数中捕获异常信息:" << e << endl;
        }
//      throw "析构函数中抛出的异常";
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    try {        
        A a;
        foo();
        // ...后续代码...
    } // a.~A()  ... 
    catch( const char* e ) {
        cout << "main中捕获异常信息:" << e << endl;
    }

    return 0;
}






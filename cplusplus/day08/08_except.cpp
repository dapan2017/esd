// 异常说明:承诺调用者，函数内部绝对不会抛出异常说明以外异常类型
#include <iostream>
using namespace std;

void foo() throw(int,double,const char*) { // 显式抛出异常
    throw "hello"; // 3.14; // -1;
}

void bar() throw(int,double,const char*) { // 隐式抛出异常
    foo();
    // 调用了几十个不同函数，而且每个函数都可能抛出异常，抛出异常类型都不一样
}

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    try {
        bar();
//        foo();
    }
    catch( int& e ) {
        cout << "1. catch(int):" << e << endl;
    }
    catch( double& e ) {
        cout << "2. catch(double):" << e << endl;
    }
    catch( const char* e ) {
        cout << "3. catch(const char*):" << e << endl;
    }
    return 0;
}






// 利用 throw 报告错误信息
#include <iostream>
#include <cstdio>
using namespace std;
class A {
public:
    A() { cout << "A() is invoked" << endl; }
    ~A() { cout << "~A() is invoked" << endl; }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
void foo() {
    cout << "foo出错前的几百行代码" << endl;
    A a;
    FILE* pfile = fopen("./cfg", "r");
    if( !pfile ) 
        throw -1; 
    cout << "foo出错后的几百行代码" << endl;
} // a.~A()  释放a本身所占内存空间
void bar() {
    cout << "bar出错前的几百行代码" << endl;
    A b;
//    try {
        foo();
//    }
//    catch( int e ) {
//        cout << "bar中捕获异常信息:" << e << endl;
//    }
    cout << "bar出错后的几百行代码" << endl;
} // b.~A()  释放b本身所占内存空间
void hum() {
    cout << "hum出错前的几百行代码" << endl;
    A c;
//    try {
        bar();
//    }
//    catch( int e ) {
//        cout << "hum中捕获异常信息:" << e << endl;
//    }
    cout << "hum出错后的几百行代码" << endl;
} // c.~A()  释放c本身所占内存空间
int main( void ) {
    cout << "main出错前的几百行代码" << endl;
    A d;
    try {
        hum();
    }
    catch( int e ) {
        cout << "main中捕获异常信息:" << e << endl;
    }
    cout << "main出错后的几百行代码" << endl;
    return 0;
} // d.~A()  释放d本身所占内存空间






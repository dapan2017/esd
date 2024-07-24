// 构造函数中的异常
#include <iostream>
#include <cstdio>
using namespace std;
class A {
public:
    A() { cout << "A()" << endl; }
    ~A() { cout << "~A()" << endl; }
};
class C {
public:
    C() : m_p(new int) {
        //【A m_a;】定义m_a,利用m_a.A()
        //【int* m_p=new int;】
        cout << "C()" << endl;
        FILE* pfile = fopen("./cfg", "r");
        if( !pfile ) {
            delete m_p; // 动态资源需要自己手动释放
            // 对于m_a,利用m_a.~A()
            // 释放m_a/m_p本身所占内存空间
            throw -1;
        }
        // ...后续代码...
    }
    ~C() {
        cout << "~C()" << endl;
        delete m_p;
        // 对于m_a,利用m_a.~A()
        // 释放m_a/m_p本身所占内存空间
    }
private:
    A m_a; // 对象形式成员变量
    int* m_p;
};

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    try {
        C c; 
    } // 如果c是完整对象,利用c.~C(),但是如果c是残缺对象,将不会调用~C()
    catch( ... ) {
        // ...
    }

    return 0;
}






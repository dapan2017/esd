// 虚析构函数:当delete一个指向子类对象的基类型指针时，能够正确调用子类的析构函数
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
using namespace std;
class A {
public:
    A() : m_a(open("./cfg", O_CREAT|O_RDWR, 0644)) {
        //【int m_a=open(...);】
        cout << "A() is invoked-打开了cfg文件" << endl;
    }
    virtual ~A() {
        close(m_a);
        cout << "~A() is invoked - 关闭了cfg文件" << endl;
        // 释放m_a本身所占内存空间
    }
private:
    int m_a;
};
class B : public A {
public:
    B() : m_b(open("./file", O_CREAT|O_RDWR,0644)) {
        //【A();】定义基类子对象,利用基类子对象.A()
        //【int m_b=open(..);】
        cout << "B() is invoked - 打开了file文件" << endl;
    }
    ~B() {
        close( m_b );
        cout << "~B() is invoked - 关闭了file文件" << endl;
        // 对于 基类子对象,利用 基类子对象.~A()
        // 释放 m_b/基类子对象 本身所占内存空间
    }
private:
    int m_b;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A* p = new B;
    delete p; // p->虚析构函数(~B())   释放B堆对象所占内存空间
    return 0;
} // 释放 p 指针本身所占内存空间






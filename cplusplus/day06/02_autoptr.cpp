// * / -> 操作符函数
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <memory>
using namespace std;
class A {
public:
    A() : m_f(open("./cfg", O_CREAT|O_RDWR,0644)) {
        //【int m_f=open(...);】
        cout << "A() is invoked - 打开了cfg文件" << endl;
    }
    void foo() {
        write( m_f, "hello world", 11 );
        cout << "foo() is invoked - 写入了cfg文件" << endl;
    }
    ~A() {
        close( m_f );
        cout << "~A() is invoked - 关闭了cfg文件" << endl;
        // 释放m_f本身所占内存空间
    }
private:
    int m_f;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
class Auto_ptr {
public:
    Auto_ptr( A* a ) : m_a(a) {
        //【A* m_a=a;】
    }
    ~Auto_ptr( /* Auto_ptr* this */ ) {
        delete this->m_a;
        this->m_a = NULL;
        // 释放m_a本身所占内存空间
    }
    A& operator*() {
        return *m_a;
    }
    A* operator->() {
        return m_a;
    }
    // 
    Auto_ptr( Auto_ptr& that ) : m_a(that.m_a) {
       //【A* m_a=that.m_a;】
       that.m_a = NULL;
    }
    
private:
    A* m_a; // 常规指针 (保存用户申请内存的地址)
};
int main( void ) {
    auto_ptr<A> pau(new A);
    (*pau).foo();
    pau->foo();

    auto_ptr<A> pbu = pau;
    (*pbu).foo();
    pbu->foo();

    (*pau).foo();

    /* 使用自己设计的智能指针维护用户申请的内存
    Auto_ptr pau(new A); // 定义 pau,利用 pau.Auto_ptr(new A)
    (*pau).foo(); // pau.operator*().foo()
    pau->foo();   // pau.operator->()->foo()

    Auto_ptr pbu = pau; // 定义pbu,利用pbu.Auto_ptr(pau)
    (*pbu).foo();
    pbu->foo();
    (*pau).foo();
    */
    /* 使用常规指针维护用户申请的内存
    A* pa = new A; // 定义A类堆对象,利用A类堆对象.A()
    (*pa).foo();
    pa->foo();
    A* pb = pa;
    delete pa; // pa->~A()  释放A类堆对象所占内存空间
    */
    return 0;
} // 利用pau.~Auto_ptr() pbu.~Auto_ptr()   释放 pau/pbu 本身所占内存空间








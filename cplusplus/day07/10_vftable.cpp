// 多态揭秘 -- 虚函数表
#include <iostream>
using namespace std;
class A { // 编译器根据A类信息,将制作一张虚函数表  A::foo的地址  A::bar的地址
public:
    virtual void foo() { cout << "A::foo" << endl; }
    virtual void bar() { cout << "A::bar" << endl; }
};
class B : public A { // 编译器根据B类信息,将制作一张虚函数表 B::foo的地址 A::bar的地址
public:
    void foo() { cout << "B::foo" << endl; }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A a; // |虚表指针|->编译器根据A类信息制作的虚函数表
    cout << "a对象大小:" << sizeof(a) << endl;

    B b; // |虚表指针|->编译器根据B类信息制虚函数表
    cout << "b对象大小:" << sizeof(b) << endl;

    void(**pfun)() = *((void(***)())&a); // 从a取出虚表指针
    pfun[0](); // A::foo
    pfun[1](); // A::bar

    void(**pfun2)() = *((void(***)())&b); // 从b取出虚表指针
    pfun2[0](); // B::foo
    pfun2[1](); // A::bar

    A* pa = &b;
    pa->foo(); // 编译器在编译期间 不知道调用哪个foo

    // 1. 根据pa找到b对象所占内存空间
    // 2. 从b对象所占内存空间中 获取 虚表指针
    // 3. 利用 虚表指针 找到 编译器根据B类信息制虚函数表
    // 4. 从虚函数表中 获取 虚函数的入口地址
    // 5. 利用 虚函数入口地址(函数指针) 调用 函数
    return 0;
}





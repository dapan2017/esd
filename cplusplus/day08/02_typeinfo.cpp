// typeid操作符:无法获取对象本身的常属性信息
#include <iostream>
#include <typeinfo>
using namespace std;
class A { // 编译器根据A类信息,将制作一张虚函数表 A...|A::foo的地址
    virtual void foo() {}
};
class B : public A { // 编译器根据B类信息,将制作一张虚函数表 B...|A::foo的地址
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    B b; // |虚表指针|-->编译器根据B类信息制作的虚函数表
    A* pa = &b;
    A& ra = b;
    cout << typeid(*pa).name() << endl;
        // pa->b对象所占内存空间->虚表指针->编译器根据B类信息制作的虚函数表->B
    cout << typeid(ra).name() << endl;
        // ra->b对象所占内存空间->虚表指针->编译器根据B类信息制作的虚函数表->B

    int m=10;
    const type_info& rt = typeid(m);
    // 1. 获取m的各项类型信息(类名,类大小,类版本...)
    // 2. 创建一个type_info类的对象
    // 3. 将第一步获取类型信息 保存到 第二部创建的类对象的各个"私有"成员变量中
    // 4. 返回这个类对象的 常引用
    string rn = rt.name();
    cout << "m的类型:" << rn << endl;

    const int n = 10;
    cout << "n的类型:" << typeid(n).name() << endl;

    cout << (typeid(m)==typeid(n)) << endl; // typeid(m).operator==( typeid(n) )
    return 0;
}






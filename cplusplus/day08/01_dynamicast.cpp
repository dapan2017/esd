// 动态类型转换:将子类类型指针 转换为 基类类型指针
//              将子类类型引用 转换为 基类类型引用
#include <iostream>
using namespace std;
class A { // 编译器根据A类信息,将制作一张虚函数表  "A"...|A::foo的地址
    virtual void foo() {}
};
class B : public A { // 编译器根据B类信息,将制作一张虚函数表  "B"...|A::foo的地址
};
class C : public B { // 编译器根据C类信息,将制作一张虚函数表  "C"...|A::foo的地址
};

class D {};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    B b; // |虚表指针|->编译器根据B类信息制作的虚函数表->"B"...|A::foo的地址
    A* pa = &b; // B*-->A* 可以隐式转换

    cout << "--------------dynamic_cast-----------------" << endl;

    B* pb = dynamic_cast<B*>(pa); 
        // pa->b对象所占内存空间->虚表指针->编译器根据B类信息制作的虚函数表->"B"
    cout << "A* pa--->B* pb: " << pb << endl;
    
    C* pc = dynamic_cast<C*>(pa); // 不安全
        // pa->b对象所占内存空间->虚表指针->编译器根据B类信息制作的虚函数表->"B"
    cout << "A* pa--->C* pc: " << pc << endl;

    D* pd = dynamic_cast<D*>(pa); // 不合理
        // pa->b对象所占内存空间->虚表指针->编译器根据B类信息制作的虚函数表->"B"
    cout << "A* pa--->D* pd: " << pd << endl;

    cout << "--------------static_cast-----------------" << endl;

    pb = static_cast<B*>(pa); // 即合理又安全
        // A*-->B*的反向B*-->A*可以隐式
    cout << "A* pa--->B* pb: " << pb << endl;

        // A*-->C*的反向C*-->A*可以隐式
    pc = static_cast<C*>(pa); // 不安全
    cout << "A* pa--->C* pc: " << pc << endl;

//  pd = static_cast<D*>(pa); // 不合理
        // A*-->D*的反向D*-->A*不能隐式
//  cout << "A* pa--->D* pd: " << pd << endl;
    return 0;







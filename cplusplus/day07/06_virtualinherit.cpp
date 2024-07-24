// 虚继承 --  钻石继承缺陷的解决方法
// (1) 公共基类(A类)子对象,在汇聚子类(Z类)对象中 只存在一份
// (2) 公共基类(A类)子对象,要被多个中间子类(X/Y类)子对象共享
#include <iostream>
using namespace std;
#pragma pack(1)
class A { // 公共基类(人类)
public:
    int m_a; // 年龄
};
class X : virtual public A { // 中间子类(学生类)
public:
    int m_x;
    void setAge( /* X* this */ int age ) {
        this->m_a = age; 
        // this->X中间子类子对象->指针1->偏移量->this+偏移量->A公共基类子对象->m_a
    }
};
class Y : virtual public A { // 中间子类(老师类)
public:
    int m_y;
    int getAge( /* Y* this */ ) {
        return this->m_a;
        // this->Y中间子类子对象->指针2->偏移量->this+偏移量->A公共基类子对象->m_a
    }
};
class Z : public X, public Y { // 汇聚子类(助教类)
public:
    int m_z;
    void foo() {
        m_a = 20; //
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Z z; // |X类子对象|Y类子对象|m_z|A公共基类子对象|-->
         // |指针1 m_x|指针2 m_y|m_z|m_a|
    cout << "汇聚子类对象z的大小: " << sizeof(z) << endl; // 32
    z.m_a = 20; // 

    z.setAge( 28 ); // setAge( &z )
    cout << z.getAge() << endl; // getAge( &z )
    return 0;
}






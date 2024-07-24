// 非虚的世界(没有虚函数的程序)
#include <iostream>
using namespace std;
class Shape {
public:
    void Draw() { cout << "Shape::Draw" << endl; }
    int m_x;
    int m_y;
};
class Rect : public Shape {
public:
    void Draw() { cout << "Rect::Draw" << endl; }
    int m_rx;
    int m_ry;
};
class Circle : public Shape {
public:
    void Draw() { cout << "Circle::Draw" << endl; }
    void foo() {}
    int m_radius;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    cout << "----------利用 对象 调用 非虚成员函数-------------" << endl;
    // 哪个类对象 就调用 哪个类的 普通成员函数(对象自恰性)
    Shape s;
    s.Draw(); // Shape::Draw
    Rect r;
    r.Draw(); // Rect::Draw
    Circle c;
    c.Draw(); // Circle::Draw
    
    cout << "----------利用 指针 调用 非虚成员函数-------------" << endl;
    
    // 基类类型指针 只能调用 基类的普通成员函数
    Shape* ps = &s;
    ps->Draw(); // Shape::Draw
    
    // 即便 基类类型指针指向子类对象，仍然调用基类的普通成员函数
    ps = &r;
    ps->Draw(); // Shape::Draw

    ps = &c;
    ps->Draw(); // Shape::Draw

//  ps->foo();
//  编译器 根据 指针本身类型 来确定到底调用哪个类的普通成员函数
    return 0;
}






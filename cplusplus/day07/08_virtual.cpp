// 虚的世界(有虚函数的程序)
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void Draw() { cout << "Shape::Draw" << endl; } // 虚函数(原始版本)
    int m_x;
    int m_y;
};
class Rect : public Shape {
public:
    void Draw() { cout << "Rect::Draw" << endl; } // 虚函数(编译器补virtual),覆盖版本
    int m_rx;
    int m_ry;
};
class Circle : public Shape {
public:
    virtual void Draw() { cout << "Circle::Draw" << endl; } // 虚函数,覆盖版本
    int m_radius;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    cout << "----------利用 对象 调用 虚成员函数-------------" << endl;
    // 哪个类对象 就调用 哪个类的 虚成员函数(对象自恰性)
    Shape s;
    s.Draw(); // Shape::Draw
    Rect r;
    r.Draw(); // Rect::Draw
    Circle c;
    c.Draw(); // Circle::Draw
    
    
    cout << "----------利用 指针 调用 虚成员函数-------------" << endl;
    
    Shape* ps = &s;
    ps->Draw(); // Shape::Draw (不是多态)
    
    ps = &r;
    ps->Draw(); // Rect::Draw (多态)

    ps = &c;
    ps->Draw(); // Circle::Draw (多态)
    
//  根据 指针 指向的对象的类型 来确定到底调用哪个类的虚成员函数
    return 0;
}






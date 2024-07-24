#include <iostream>
using namespace std;
#pragma pack(1)
class Human {
public:
    int m_age;
    string m_name;
};
class Student : public Human {
public:
    int m_no;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human h; // |m_age m_name|
    cout << "基类对象h的大小:" << sizeof(h) << endl; // 36
    Student s; // |基类子对象|m_no|-->|m_age m_name|m_no|
    cout << "子类对象s的大小:" << sizeof(s) << endl; // 40

    Human* ph = &s; // Student*-->Human*
    Human& rh = s;
    // 以上两种转换,编译器认为访问范围缩小,是安全的.

//  Student* ps = static_cast<Student*>(&h); // Human*-->Student*
//  Student& rs = static_cast<Student&>(h);
    // 以上两中转换,编译器认为访问范围扩大,是危险的.
    // 虽然通过静态转换可以成功,但是风险依然存在,及其不建议大家这么做
    
    Student* ps = static_cast<Student*>(ph); // Human*-->Student*
    Student& rs = static_cast<Student&>(rh); 
    // 以上两种转换 毫无风险(及其建议大家这么)

    // 编译器 简单而且粗暴 根据类型来盘是否存在风险
    return 0;
}









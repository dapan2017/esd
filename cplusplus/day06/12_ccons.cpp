// 析构函数
#include <iostream>
using namespace std;
class Human {
public:
    Human( int age=0, const char* name="无名" ):m_age(age),m_name(name) {
        //【int m_age=age;】定义m_age,初值为age
        //【string m_name(name);】定义m_name,利用m_name.string(name)
        cout << "Human类的缺省构造函数被调用" << endl;
    }
    Human( const Human& that ): m_age(that.m_age), m_name(that.m_name) {
        //【int m_age=that.m_age;】定义m_age,初值为that.m_age
        //【string m_name(that.m_name);】定义m_name,利用m_name.string(that.m_name)
        cout << "Human类的拷贝构造函数被调用" << endl;
    }
    Human& operator=( const Human& that ) {
        // 编译器不会在拷贝赋值函数中塞任何操作
        cout << "Human类的拷贝赋值函数被调用" << endl;
        m_age = that.m_age;
        m_name = that.m_name; // m_name.operator=(that.m_name)
        return *this;
    }
    ~Human() {
        cout << "Human类的析构函数被调用" << endl;
        // 对于基本类型的成员变量m_age,什么都不做
        // 对于类类型的成员变量m_name,利用m_name.~string()
        // 释放 m_age/m_name 本身所占内存空间
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age;
    }
private:
    int m_age; // 基本类型成员变量
    string m_name; // 类类型成员变量
};
class Student : public Human {
public:
    void getinfo() {
        Human::getinfo();
        cout << ", 成绩:" << m_score << ", 评语:" << m_remark << endl;
    }
//  如果子类没有提供任何构造函数,编译器将提供一个无参构造函数
/*  Student() {
        【Human();】定义基类子对象,利用基类子对象.Human()
        【float m_score;】
        【string m_remark;】
    }*/
    Student(int age=0,const char* name="无名",float score=0.0,
        const char* remark="没有"): Human(age,name),m_score(score),m_remark(remark) {
        //【Human(age,name);】定义基类子对象,利用基类子对象.Human(age,name)
        //【float m_score=score;】
        //【string m_remark(remark);】
        cout << "Student类的缺省构造函数被调用" << endl;
    }
private:
    float m_score;
    string m_remark;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Student s1(22,"张飞",88.5,"良好"); // 定义s1,利用s1.Student(..)
    s1.getinfo();
    return 0;
}








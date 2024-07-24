// 拷贝构造函数被调用的时间点
#include <iostream>
using namespace std;
class Human {
public:
    Human( int age=0, const char* name="无名" ) {
        //【int m_age;】定义m_age,初值为随机数
        //【string m_name;】定义m_name,利用m_name.string()
        m_age = age;
        m_name = name;
    }
    Human( const Human& that ) {
        //【int m_age;】定义m_age,初值为随机数
        //【string m_name;】定义m_name,利用m_name.string()
        cout << "Human类的拷贝构造函数被调用" << endl;
        m_age = that.m_age;
        m_name =  that.m_name;
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
    }
private:
    int m_age; // 基本类型成员变量
    string m_name; // 类类型成员变量
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
void foo( Human v ) {
    // ...
}
Human bar() {
    Human m;
    return m;
}
int main( void ) {
    Human h2(22,"张飞");

    Human h3(h2); //= h2; 定义h3,利用h3.Human(h2)->触发1次拷贝构造函数

    foo( h3 ); // 触发1次拷贝构造函数

    Human h4 = /*|...|*/ bar(); // 触发2次拷贝构造函数

    // -fno-elide-constructors
    return 0;
}









// 强烈建议设计一个类的时候 提供 无参构造函数
#include <iostream>
using namespace std;
class A { // 目前A类 有无参构造
public:
    A( int i=0 ) { 
        m_i = i;
    }
private:
    int m_i;
};
class Human {
public:
    Human( int age=0, const char* name="无名" ) {
        //【int m_age;】定义m_age,初值为随机数
        //【string m_name;】定义m_name,利用m_name.string()
        //【A m_a;】定义m_a,利用m_a.A()
        cout << "Human类的缺省构造函数被调用" << endl;
        m_age = age;
        m_name = name;
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
    }
private:
    int m_age; // 基本类型成员变量
    string m_name; // 类类型成员变量
    A m_a; // 类类型成员变量
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human h; // 定义h,利用h.Human()
    h.getinfo();

    Human h2(22,"张飞"); // 定义h2,利用h2.Human(22,"张飞")
    h2.getinfo();
    return 0;
}









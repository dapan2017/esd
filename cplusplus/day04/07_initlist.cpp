// 初始化表
#include <iostream>
using namespace std;
class Human {
public:
//  如果类没有提供任何构造函数,编译器将提供一个无参构造函数
/*  Human() {
       【int m_age;】定义m_age,初值为随机数
       【string m_name;】定义m_name,利用m_name.string()
    }*/
    Human( int age=0, const char* name="无名" ):m_age(age),m_name(name) {
        //【int m_age=age;】定义m_age,初值为age
        //【string m_name(name);】定义m_name,利用m_name.string(name)
        cout << "Human类的缺省构造函数被调用" << endl;
    }
//  如果类没有提供拷贝构造函数,编译器将提供一个默认的拷贝构造函数   
/*  Human( const Human& that ) {
       【int m_age=that.m_age;】定义m_age,初值为that.m_age
       【string m_name(that.m_name);】定义m_name,利用m_name.string(that.m_name)
    }*/
    Human( const Human& that ): m_age(that.m_age), m_name(that.m_name) {
        //【int m_age=that.m_age;】定义m_age,初值为that.m_age
        //【string m_name(that.m_name);】定义m_name,利用m_name.string(that.m_name)
        cout << "Human类的拷贝构造函数被调用" << endl;
    }
//  如果类没有提供拷贝赋值函数,编译器将提供一个默认的拷贝赋值函数
/*  Human& operator=( const Human& that ) {
        m_age = that.m_age;
        m_name = that.m_name; // m_name.operator=(that.m_name)
        return *this;
    }*/
    Human& operator=( const Human& that ) {
        // 编译器不会在拷贝赋值函数中塞任何操作
        cout << "Human类的拷贝赋值函数被调用" << endl;
        m_age = that.m_age;
        m_name = that.m_name; // m_name.operator=(that.m_name)
        return *this;
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
int main( void ) {
    Human h; // 定义h,利用h.Human()
    h.getinfo();

    Human h2(22,"张飞"); // 定义h2,利用h2.Human(22,"张飞")
    h2.getinfo();

    Human h3(h2); //= h2; 定义h3,利用h3.Human(h2)->触发拷贝构造函数
    h3.getinfo();

    Human h4;
    cout << "h4被赋值前--";
    h4.getinfo();
    (h4 = h3) = h; // h4.operator=(h3)->触发拷贝赋值函数
    cout << "h4被赋值后--";
    h4.getinfo();

    return 0;
}









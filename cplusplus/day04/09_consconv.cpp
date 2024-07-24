// 类型转换构造函数
#include <iostream>
using namespace std;
class Cat {
public:
    explicit Cat( const char* name ) : m_name(name) {
        //【string m_name(name);】
        cout << "Cat类的类型转换构造函数被调用" << endl;
    }
    void talk() {
        cout << m_name << ":喵喵~~~" << endl;
    }
private:
    string m_name;
    friend class Dog; // 友元声明
};
class Dog {
public:
    Dog( const char* name ) : m_name(name) {
        //【string m_name(name);】
    }
    void talk() {
        cout << m_name << ":汪汪~~~" << endl;
    }
    
    explicit Dog( const Cat& c ) : m_name(c.m_name) {//指定转换规则
        //【string m_name=c.m_name;】
        cout << "Dog类的类型转换构造函数被调用" << endl;
    }
private:
    string m_name;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
//  Cat smallwhite("小白"); // 定义smallwhite,利用smallwhite.Cat("小白")

//  Cat smallwhite = "小白";
            // 定义 匿名Cat类对象,利用匿名Cat类对象.Cat("小白")
            
    Cat smallwhite = static_cast<Cat>("小白");
            // 定义 匿名Cat类对象,利用匿名Cat类对象.Cat("小白")
    smallwhite.talk();

//  Dog bigyellow(smallwhite);//定义bigyellow,利用bigyellow.Dog(smallwhite)

//  Dog bigyellow = smallwhite;
            //定义 匿名Dog类对象,利用 匿名Dog类对象.Dog(smallwhite)->类型转换构造

    Dog bigyellow = static_cast<Dog>(smallwhite);
            //定义 匿名Dog类对象,利用 匿名Dog类对象.Dog(smallwhite)->类型转换构造
    bigyellow.talk();
    return 0;
}









// 类型转换构造函数 和 类型转换操作符函数
#include <iostream>
using namespace std;
class Dog; // 短式声明
class Cat {
public:
     Cat( const char* name ) : m_name(name) {
        //【string m_name(name);】
    }
    void talk() {
        cout << m_name << ":喵喵~~~" << endl;
    }
    operator Dog( /* const Cat* this */ ) const; // 声明
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
    Dog( const Cat& c ) : m_name(c.m_name) { // 类型转换构造函数
        //【string m_name=c.m_name;】
        cout << "Dog类的类型转换构造函数被调用" << endl;
    }
private:
    string m_name;
};
Cat::operator Dog() const {
    cout << "Cat类的类型转换操作符函数被调用" << endl;
    return Dog(this->m_name.c_str());
}
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Cat smallwhite("小白"); 

    Dog bigyellow = smallwhite; // Cat-->Dog( 类类型-->类类型 )
            // 定义 匿名Dog类对象,利用 匿名Dog类对象.Dog(smallwhite)->类型转换构造
            // Dog bigyellow = smallwhite.operator Dog()->类型转换操作符函数

    return 0;
}









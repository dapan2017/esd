// 前++ 和 后++
#include <iostream>
using namespace std;
class Human { // 授权 类
public:
    Human( int age=0, const char* name="无名" ):m_age(age),m_name(name) {
        //【int m_age=age;】定义m_age,初值为age
        //【string m_name(name);】定义m_name,利用m_name.string(name)
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
    }
//  成员形式的操作符函数
    Human& operator++( /* Human* this */ ) {
        this->m_age += 1; // 直接就加1
        return *this;
    }
    Human operator++( /* Human* this */ int ) {
        Human old = *this; // 克隆了b原来的值
        this->m_age += 1; // 直接加1
        return old;
    } 
private:
    int m_age;
    string m_name; 
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human a(22,"张飞"), b(20,"赵云"); // 非常左值
    const Human c(25,"关羽"), d(32,"马超"); // 常左值
    (++a).getinfo(); // a.operator++()  或  ...
    (/*|..|*/b++).getinfo(); // b.operator++(0) 或 ...
    b.getinfo();
    
    /*
    int a=10, b=20; // 非常左值
    const int c=30, d=40; // 常左值
    
    ++a;
    
    b++;
    */
    return 0;
}








// 输出操作符 和 输入操作符
#include <iostream>
using namespace std;
class Human { 
public:
    Human( int age=0, const char* name="无名" ):m_age(age),m_name(name) {
        //【int m_age=age;】定义m_age,初值为age
        //【string m_name(name);】定义m_name,利用m_name.string(name)
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
    }
//  成员形式的操作符函数
private:
    int m_age;
    string m_name; 
    friend ostream& operator<<( ostream& os, const Human& that );
    friend istream& operator>>( istream& is, Human& that );
};
// 全局形式操作符函数
ostream& operator<<( ostream& os, const Human& that ) {
    os << that.m_name << ":" << that.m_age;
    return os;
}
istream& operator>>( istream& is, Human& that ) {
    is >> that.m_name >> that.m_age;
    return is;
}
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human a(22,"张飞"), b(20,"赵云"); // 非常左值
    const Human c(25,"关羽"), d(32,"马超"); // 常左值
    a.getinfo();    
    cout << a << endl; // operator<<(cout,a)
    cout << c << endl; // operator<<(cout,c)
    cout << Human(45,"黄忠") << endl; // operator<<(cout,Human(45,"黄忠"))

    cin >> a; // operator>>(cin,a)
    cout << a << endl;
    /*
    int a=10, b=20; // 非常左值
    const int c=30, d=40; // 常左值
    
    */
    return 0;
}








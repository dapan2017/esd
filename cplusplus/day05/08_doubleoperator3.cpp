// 比较类的双目操作符
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
    bool operator==( /* const Human* this */ const Human& that ) const {
        return this->m_age==that.m_age && this->m_name==that.m_name;
    }
    bool operator!=( /* const Human* this */ const Human& that ) const {
//      return this->m_age!=that.m_age || this->m_name!=that.m_name;
        return !(*this==that);
    }
private:
    int m_age;
    string m_name; 
};
// 全局形式的操作符函数(自己课下写)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human a(22,"张飞"), b(20,"赵云"); // 非常左值
    const Human c(25,"关羽"), d(32,"马超"); // 常左值
    
    cout << (a == b) << endl; // a.operator==(b) 或 ...
    cout << (a != b) << endl; // a.operator!=(b) 或 ...

    cout << (c == d) << endl; // c.operator==(d) 或 ...
    cout << (c != d) << endl; // c.operator!=(d) 或 ...

    cout << (Human(45,"黄忠")==Human(34,"刘备")) << endl; 
            // Human(45,"黄忠").operator==(Human(34,"刘备"))

    cout << (Human(45,"黄忠")!=Human(34,"刘备")) << endl; 
            // Human(45,"黄忠").operator!=(Human(34,"刘备"))


    /*
    int a=10, b=20; // 非常左值
    const int c=30, d=40; // 常左值

    a == b;
    a == c;
    a == 5;
    c == b;
    5 == b;
    */
    return 0;
}








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
    Human sum( /* const Human* this */ const Human& that ) const {
        return Human(this->m_age+that.m_age, 
                    (this->m_name+"+"+that.m_name).c_str() );
    }
    Human sub( /* const Human* this */ const Human& that ) const {
        return Human(this->m_age-that.m_age, 
                    (this->m_name+"-"+that.m_name).c_str() );
    }
private:
    int m_age;
    string m_name; 
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human a(22,"张飞"), b(20,"赵云"), c(25,"关羽"), d(32,"马超");

    Human res = a + b; // ==> a.operator+(b) 或 operator+(a,b)
    res.getinfo();

    res = c - d; // ==> c.operator-(d) 或 operator-(c,d)
    res.getinfo();
    return 0;
}








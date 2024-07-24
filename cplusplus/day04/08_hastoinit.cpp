// 必须使用初始化表的情况
#include <iostream>
#include <cstring>
using namespace std;
class Human {
public:
    Human( int age=0, const char* name="无名", float score=0.0 )
                : m_age(age),m_name(name),m_score(score),m_len(strlen(name)) {
        //【int m_len=strlen(name);】
        //【int m_age=age;】定义m_age,初值为age
        //【string m_name(name);】定义m_name,利用m_name.string(name)
        //【const float m_score=score;】
        cout << "Human类的缺省构造函数被调用" << endl;
    }
    Human( const Human& that ) : m_age(that.m_age),
                m_name(that.m_name),m_score(that.m_score),m_len(that.m_len) {
        //【int m_len=that.m_len;】
        //【int m_age=that.m_age;】定义m_age,初值为that.m_age
        //【string m_name(that.m_name);】定义m_name,利用m_name.string(that.m_name)
        //【const float m_score=that.m_score;】
        cout << "Human类的拷贝构造函数被调用" << endl;
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age
             << ", 成绩:" << m_score << ", 名字长度:" << m_len << endl;
    }
private:
    int m_len; // 保存名字字符串的长度
    int m_age; 
    string m_name; // 保存名字字符串
    const float m_score; // 常量型成员变量
//    int m_len;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {

    Human h2(22,"张飞",88.5); 
    h2.getinfo();

    Human h3(h2); 
    h3.getinfo();

    return 0;
}









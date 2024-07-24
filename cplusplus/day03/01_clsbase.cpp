// 类:抽取事物特征的规则
#include <iostream>
#include <cstring>
using namespace std;
//struct
class Human {
public:
    void setinfo( int age=0, const char* name="无名" ) {// 桥梁函数
        if( !strcmp(name,"憨憨") ) {
            cout << "你才憨呢" << endl;
            return;
        }
        m_age = age;
        strcpy( m_name, name );
    }
    void getinfo() {
        cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
    }
private:
    int m_age; // 声明
    char m_name[256]; // 声明
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human h; // 定义h(给h分配内存空间)
             // 在h所占内存空间中 定义m_age,初值为随机数
             // 在h所占内存空间中 定义m_name,初值为随机数
    cout << "h对象的大小:" << sizeof(h) << endl; // 260
    h.setinfo( 22, "张飞" );
    h.setinfo( 22, "憨憨" );
    h.getinfo();
//    h.m_age = 22;
//    strcpy( h.m_name, "张飞" );
//    strcpy( h.m_name, "憨憨" );
//    cout << "姓名:" << h.m_name << ", 年龄:" << h.m_age << endl;
    return 0;
}







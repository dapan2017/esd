// 类:抽取事物特征的规则
#include <iostream>
#include <cstring>
using namespace std;
// 当前程序有2个对象(h/h2),每个对象各有一份成员变量(m_age/m_name),共有两份成员变量
class Human {
public: // _ZN5Human7setinfoEiPKc
    void setinfo( /* Human* this */ int age=0, const char* name="无名" ) {
        this->m_age = age;
        strcpy( this->m_name, name );
    }
    void getinfo( /* Human* this */ ) { // _ZN5Human7getinfoEv
        cout << "姓名:" << this->m_name << ", 年龄:" << this->m_age << endl;
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
    h.setinfo( 22, "张飞" ); // _ZN5Human7setinfoEiPKc(&h,...);
    h.getinfo(); // _ZN5Human7getinfoEv(&h)

    Human h2; // 定义h2(给h2分配内存空间)
              // 在h2所占内存空间中 定义m_age,初值为随机数
              // 在h2所占内存空间中 定义m_name,初值为随机数
    cout << "h2对象的大小:" << sizeof(h2) << endl; // 260
    h2.setinfo( 25, "关羽" );// _ZN5Human7setinfoEiPKc(&h2,...);
    h2.getinfo();// _ZN5Human7getinfoEv(&h2)

    return 0;
}







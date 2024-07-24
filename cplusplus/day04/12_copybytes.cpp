// 类中有指针型成员变量时,默认的拷贝构造和拷贝赋值会出现浅拷贝的缺陷
#include <iostream>
#include <cstring>
using namespace std;
// 模拟C++标准库中string类，设计一个自己的String类
class String {
public:
    char* c_str() { return m_psz; }
    String( const char* psz="" ):m_psz(new char[strlen(psz)+1]) {
        //【char* m_psz=new char[...];】
        strcpy( m_psz, psz );
    }
    ~String( /* String* this */ ) {
        delete[] this->m_psz;
        this->m_psz = NULL;
        // 释放m_psz本身所占内存空间
    }
    /*
    String( const String& that ) {
       【char* m_psz=that.m_psz;】只复制了地址,没有复制地址指向的数据-->浅拷贝
    }
    */
    // 深拷贝构造函数
    String( const String& that ) : m_psz(new char[strlen(that.m_psz)+1]) {
        //【char* m_psz = new char[...];】
        strcpy( m_psz, that.m_psz );//没有复制地址，复制地址指向的数据->深拷贝
    }
    /* 默认的拷贝赋值函数
    String& operator=( const String& that ) {
        this->m_psz = that.m_psz;//复制了地址,没有复制地址指向的数据->浅拷贝
        return *this;
    }
    */
    // 深拷贝赋值函数
    String& operator=( const String& that ) {
        delete[] this->m_psz;
        this->m_psz = new char[strlen(that.m_psz)+1];
        strcpy( this->m_psz, that.m_psz );
        return *this;
    }
private:
    char* m_psz; // 指针型成员变量
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    String s1("hello");
    cout<<"s1:"<<s1.c_str()<<", s1维护的堆内存地址:" << (void*)s1.c_str() << endl; 

    String s2(s1); //= s1;定义s2,利用s2.String(s1)->触发拷贝构造函数
    cout<<"s2:"<<s2.c_str()<<", s2维护的堆内存地址:" << (void*)s2.c_str() << endl; 

    String s3; // s3维护一个字节堆内存"\0"
    s3 = s2; // s3.operator=(s2)
    cout<<"s3:"<<s3.c_str()<<", s3维护的堆内存地址:" << (void*)s3.c_str() << endl; 

    return 0;
} // s1.~String()   s2.~String()    s3.~String()







// 必须自己写析构函数的情况
#include <iostream>
using namespace std;
class A {
public:
    A(int i=0) : m_i(i),m_p(new int),m_f(open("./cfg",O_CREAT|O_RDWR,0644)) {
        //【int m_i=i;】定义m_i,初值为i
        //【int* m_p=new int;】定义m_p,初值为指向一块堆内存(动态资源)
        //【int m_f=open(..);】定义m_f,初值为文件描述符->文件表等内核结构(动态资源)
    }
    ~A() {
        delete m_p;
        close( m_f );
        // 释放 m_i/m_p/m_f 本身所占内存空间
    }
    /* 默认析构函数
    ~A() {
        释放 m_i/m_p/m_f 本身所占内存空间
    }
    */
private:
    int m_i;
    int* m_p;
    int m_f;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A a; // 定义a,利用a.A()
    return 0;
} // a.~A()  释放a本身所占内存空间








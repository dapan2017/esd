// 单例模式:设计一个类，当用户使用时，永远只能出现一个对象
#include <iostream>
using namespace std;
// 懒汉式单例
class Singleton {
public:
    static Singleton& getInstance() {
        if( s_instance==NULL ) {
            s_instance = new Singleton; // 唯一的对象
            cout << "创建了对象" << endl;
        }
        ++s_count;
        return *s_instance;
    }
    void releaseInstance() {
        --s_count;
        if( s_count==0 ) {
            delete s_instance;
            s_instance = NULL;
            cout << "销毁了对象" << endl;
        }
    }
private:
    Singleton() {} 
    Singleton( const Singleton& that ) {} 
    static Singleton* s_instance; // 不是唯一的对象，仅仅是一个指针
    static int s_count;
};
Singleton* Singleton::s_instance = NULL; //
int Singleton::s_count = 0;
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Singleton& s1 = Singleton::getInstance();//第一次创建唯一对象
    Singleton& s2 = Singleton::getInstance();//返回之前创建的对象
    Singleton& s3 = Singleton::getInstance();//...
    cout << "&s1:" << &s1 << ", &s2:" << &s2 << ", &s3:" << &s3 << endl;
    s1.releaseInstance(); // 对计数减1
    s2.releaseInstance(); // ...
    s3.releaseInstance();//最后一次销毁对象
    return 0;
}









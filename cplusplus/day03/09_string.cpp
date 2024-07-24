#include <iostream>
using namespace std;

// C++标准库设计的string类

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    string s1("hello");
                //定义s1,利用s1.string("hello")->s1维护的字符串为"hello"
    cout << "s1:" << s1 << endl;

    // 如果在做初始化,并且"="两边类型完全一致,那么=xxx和(xxx)无差别

    string s2 = s1; //(s1)
    //定义s2,利用s2.string(s1)->s2维护的字符串 和 s1维护的字符串 内容相同
    cout << "s2:" << s2 << endl;

    string s3; // 定义s3,利用s3.string()->s3维护的字符串为"\0"
    cout << "s3:" << s3 << endl;
    
    // 如果在做赋值,并且"="两边类型完全一致,将触发operator=函数的调用

    s3 = s2; // s3.operator=(s2)-->s3维护的字符串 和 s2维护的字符串 内容相同
    cout << "s3:" << s3 << endl;

    // 无论初始化还是赋值,只要"="两边类型不一致,首先都要类型转换

    string s4="hello"; 
    // 定义 匿名string类对象,利用 匿名string类对象.string("hello")->匿名string类对象维护的字符串为"hello"
    // string s4 = 匿名string类对象;-->s4维护的字符串 和 匿名string类对象维护的字符串 内容相同
    // ---> s4维护的字符串为"hello"

    string s5;
    s5 = "hello";
    //定义 匿名string类对象,利用 匿名string类对象.string("hello")->匿名stri    ng类对象维护的字符串为"hello"
    //s5=匿名string类对象;-->s5维护的字符串 和 匿名string类对象维护的字符串内容相同
    //--->s5维护的字符串为"hello"
    return 0;
}









// 布尔上下文
#include <iostream>
#include <cstdio>
using namespace std;
class A {
public:
    A( int i ) : m_i(i) {
        //【int m_i = i;】
    }
    operator bool( /* const A* this */ ) const {
        cout << "A类的类型转换操作符函数被调用" << endl;
        return this->m_i;
    }
private:
    int m_i;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    A a(100), b(0);

    bool c = b; // bool c=b.operator bool()  利用类对象给bool变量初始化
    cout << "c=" << c << endl;

    c = a; // c=a.operator bool()  利用类对象给bool变量赋值
    cout << "c=" << c << endl;

    if(a) { // a.operator bool()  if语句的判定条件
        cout << "if语句的判定条件为 true" << endl;
    }
    
    while(a) { // a.operator bool() while循环的判定条件
        cout << "while循环的判定条件为 true" << endl;
        break;
    }

    for( ;a; ) { // a.operator bool()  for循环的第二个判定条件
        cout << "for循环的第二个判定条件为 true" << endl;
        break;
    }

    cout << !a << endl; // ! a.operator bool()  逻辑反
    return 0;
}







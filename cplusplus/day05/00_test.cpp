#include <iostream>
using namespace std;
/*
class A { // 空类
};
int main(void) {
    A a; // 空类对象所占内存中保存1个字节垃圾数据
    cout << "a的大小:" << sizeof(a) << endl;
    A& ra = a;
    return 0;
}
*/

class A { 
public:
    int m_i;
//  A m_a; // 类中不能包含一个本类普通对象作为成员变量
    static A m_sa; // 类中可以包含一个本类静态对象作为成员变量
};
A c;
A A::m_sa = c;
int main(void) {
    A a; // 定义a(给a分配内存空间)
    cout << "a的大小:" << sizeof(a) << endl;
    return 0;
}




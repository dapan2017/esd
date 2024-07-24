// 二次编译:第一次编译器过不去，谈不上第二次编译
#include <iostream>
using namespace std;
class A {
public:
    void foo() { cout << "A::foo" << endl; }
};
template<typename T>void func() {
//  fdsfsfgsdagdf; // 第一次编译err
    A a;
    a.foo();
//  a.sdf(); // 第一次编译器err

    T t;
//  t.fjdsklfjdskl(); // 第一次编译ok, 第二次编译err
//  t.fdsf<fds>fds(); // 第一次编译不能容忍尖括号
}
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    func<A>();    
    return 0;
}










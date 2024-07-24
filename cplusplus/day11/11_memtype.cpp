// 模板型成员类型 
#include <iostream>
using namespace std; // 模板型成员函数
template<typename X>class A {
public:
    template<typename Y>class B { // 模板型成员类型
    public:
        template<typename Z>void foo(); // 声明
    };
};
template<typename X>
template<typename Y>
template<typename Z>void A<X>::B<Y>::foo() { // 定义
    cout << "foo()" << endl;
}
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    A<int>::B<double> b;
    b.foo<float>();
    return 0;
}










// 利用 类型形参 访问 成员函数模板
#include <iostream>
using namespace std;
class A {
public:
    template<typename T>void foo() { cout << "A<T>::foo" << endl; }
};
template<typename T>void func() {
    T t;
    t.template foo<int>(); // template就是告诉编译器 后面是函数模板实例化
}
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    func<A>();    
    return 0;
}










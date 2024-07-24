// 嵌套依赖
#include <iostream>
using namespace std;
class A {
public:
    class B {
    public:
        void foo() { cout << "A::B::foo" << endl; }
    };
};
template<typename T>void func() {
    typename T::B b; // 如果不加typename,编译器认为B是T这个未知类的静态成员变量
                     // 如果加上typename,编译器认为B是T这个未知类的嵌套类型
    b.foo();
}
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    func<A>();    
    return 0;
}










// 子类模板 访问 基类模板的 成员
#include <iostream>
using namespace std;
template<typename T>class Base {
public:
    int m_i;
    void foo() { cout << "Base<T>::foo" << endl; }
};
// int m_i;
// void foo() {}
template<typename T,typename D>class Derived : public Base<T> {
public:
//  int m_i;
//  void foo() {}
    void bar( /* Derived<T,D>* this */ ) {
        Base<T>::m_i = 100;
        Base<T>::foo();
        this->m_i = 200;
        this->foo();
        // 以上四行都为 未知类型调用，编译器在第一次编译时隐忍过去
    }
};
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Derived<int,double> d; // class Derived<int,double> : public Base<int> {...};
    return 0;
}










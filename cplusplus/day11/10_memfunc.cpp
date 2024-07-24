// 模板型成员函数 -- 成员函数模板
#include <iostream>
using namespace std;

template<typename T>class CMath {
public:
    template<typename D>void foo(); // 声明
};
// (1)帽子不能丢 (2)要用类名引出成员，不能用类模板引出成员
template<typename T>
template<typename D>
void CMath<T>::foo() { // 定义
    cout << "CMath<T>::foo<D>()" << endl;
}

// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    CMath<int> m;
    m.foo<double>();
    return 0;
}










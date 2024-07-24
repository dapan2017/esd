// 函数模板类型形参的 默认值(类型) -- 这种做法C++11标准才开始支持的
#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T=float, typename D=short>void Max() { 
    T t;
    D d;
    cout << "t的类型:" << typeid(t).name() << endl; 
    cout << "d的类型:" << typeid(d).name() << endl; 
}

int main( void ) {
    Max<int>(); 
    Max<int,double>();
    return 0;
}










// 类模板类型形参的 默认值(类型) -- 98/03就支持
#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T=float, typename D=short>class CMath {
public:
    void print() {
        cout << "m_t的类型:" << typeid(m_t).name() << endl;
        cout << "m_d的类型:" << typeid(m_d).name() << endl;
    }
private:
    T m_t;
    D m_d;
};

int main( void ) {
    CMath<int,double> m1;
    m1.print();

    CMath<> m2;
    m2.print();
    return 0;
}










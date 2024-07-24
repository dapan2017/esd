// 类模板 绝对不是 类
#include <iostream>
using namespace std;

template<typename T>class CMath {
public:
    CMath( T t1, T t2 ) : m_t1(t1), m_t2(t2) {}
    T add( ); // 声明
private:
    T m_t1;
    T m_t2;
};

// (1) 帽子不能丢  (2) 用类名引出成员，不要用类模板引出成员
template<typename T>
T CMath<T>::add() { // 定义
    return m_t1 + m_t2;
}

// class CMath<int> { ... };
// class CMath<double> { ... };
// class CMath<string> { ... };
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    int nx=10, ny=20;
    CMath<int> m1(nx,ny);
    cout << m1.add() << endl;

    double dx=1.23, dy=4.56;
    CMath<double> m2(dx,dy);
    cout << m2.add() << endl;

    string sx="hello ", sy="world";
    CMath<string> m3(sx,sy);
    cout << m3.add() << endl;
    return 0;
}










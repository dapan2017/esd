// 成员函数的 延迟实例化 (延迟出现)
#include <iostream>
using namespace std;
class Integer {
public:
    Integer( int i ) : m_i(i) {}
    Integer operator+( const Integer& that ) const {
        return Integer(this->m_i+that.m_i);
    }
private:
    int m_i;
};
template<typename T>class CMath {
public:
    CMath( T t1, T t2 ) : m_t1(t1), m_t2(t2) {}
    T add( ) {
        return m_t1 + m_t2;
    }
private:
    T m_t1;
    T m_t2;
};
/*
class CMath<int> {
public:
    CMath<int>( int t1, int t2 ) : m_t1(t1), m_t2(t2) {}
    int add() {
        return m_t1 + m_t2;
    }
private:
    int m_t1;
    int m_t2;
};
*/
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Integer ix=100, iy=200;
    CMath<Integer> m2(ix,iy);
    m2.add();

    int nx=10, ny=20;
    CMath<int> m1(nx,ny);
    m1.add();
    return 0;
}










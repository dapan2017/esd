// 模板型成员变量
#include <iostream>
using namespace std;
template<typename T>class Array {
public:
    T& operator[](size_t index) {
        return arr[index];
    }
private:
    T arr[10];
};
template<typename D, template<typename M>class C=Array >class Sum { // 求和器
public:
    Sum( C<D>& s ) : m_s(s) {}
    D add() {
        D d = D();
        for( int i=0; i<10; i++ ) {
            d += m_s[i];
        }
        return d;
    }
private:
    C<D> m_s; // Array<D> m_s
};
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Array<int> a; // a对象当做一维数组使用
    for( int i=0; i<10; i++ ) {
        a[i] = 1+i;
    }
    for( int i=0; i<10; i++ ) {
        cout << a[i] << ' ';
    }
    cout << endl;
    
    Sum<int,Array> s(a);
    cout << s.add() << endl;

    Array<string> sa;
    for( int i=0; i<10; i++ ) {
        sa[i] = "hello ";
    }
    Sum<string, Array> ssa(sa);
    cout << ssa.add() << endl;
    return 0;
}










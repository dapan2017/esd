// 常对象 和 非常对象
#include <iostream>
using namespace std;
class Integer {
public:
    void setinfo( /* Integer* this */ int i ) { // 非常函数
        m_i = i; 
    }
    void getinfo( /* Integer* this */ ) { // 非常函数
        cout << "非常版本getinfo:" << m_i << endl; 
    }
    void getinfo( /* const Integer* this */ ) const { // 常函数
        const_cast<Integer*>(this)->m_i = 999;
        cout << "常版本getinfo:" << m_i << endl; 
    }
private:
    /*mutable*/ int m_i; 
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Integer ix; // ix是非常对象
    ix.setinfo( 666 );
    ix.getinfo(); // getinfo(&ix)->实参类型为Integer*
    const Integer cix = ix; // cix是常对象
    cix.getinfo(); // getinfo(&cix)->实参类型为const Integer*
    
    return 0;
}







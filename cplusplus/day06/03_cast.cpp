// 类型转换构造函数 和 类型转换操作符函数
#include <iostream>
using namespace std;
class Integer {
public:
    Integer( int i ) : m_i(i) {
        //【int m_i=i;】
        cout << "Integer类的类型转换构造函数被调用" << endl;
    }
    operator int( /* const Integer* this */ ) const {
        cout << "Integer类的类型转换操作符函数被调用" << endl;
        return this->m_i; 
    }
private:
    int m_i;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    int m=10;

    Integer ix = m; // int-->Integer( 基本类型-->类类型 )
                    // 定义 匿名Integer类对象,利用匿名Integer类对象.Integer(m)
                    // Integer ix = m.operator Integer()-->走不通

    int n = ix; // Integer-->int( 类类型-->基本类型 )
                // 定义 匿名int类对象,利用匿名int类对象.int(ix)-->走不通
                // int n = ix.operator int()-->类型转换操作符函数
    return 0;
}







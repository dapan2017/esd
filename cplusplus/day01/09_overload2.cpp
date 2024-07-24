// 详谈同一作用域
#include <iostream>
using namespace std;
namespace ns1 { 
    void foo( char* c, short s ) {
        cout << "1. foo" << endl;
    }
    void foo( int i, double d ) {
        cout << "2. foo" << endl;
    }
}
namespace ns2 {
    void foo( const char* c, short s ) {
        cout << "3. foo" << endl;
    }
    void foo( double d, int i ) {
        cout << "4. foo" << endl;
    }
}
int main( void ) {
    using namespace ns1; // ns1中foo出现在可见表
    using ns2::foo;      // ns2中foo出现在定义表
    char* c;  short s;
    foo(c,s); // 1
    return 0;
}







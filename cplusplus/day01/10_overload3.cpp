// 重载解析优先级
#include <iostream>
using namespace std;
void foo( char* c, short s ) { // _Z3fooPcs
    cout << "1. foo" << endl;
}
void foo( const char* c, short s ) { // _Z3fooPKcs
    cout << "2. foo" << endl;
}
void foo( char* c, int s ) { // _Z3fooPci
    cout << "3. foo" << endl;
}
void foo( char* c, char s ) { // _Z3fooPcc
    cout << "4. foo" << endl;
}
void foo( ... ) { // _Z3fooz
    cout << "5. foo" << endl;
}
int main( void ) {
    char* c;    short s;
    foo( c, s ); // _Z3fooPcs(c,s)
    //  普通方式调用,由实参和形参的匹配度决定调用哪个foo函数

    void(*pfunc)(const char*,short) = foo; // _Z3fooPKcs
    pfunc( c, s );// 函数指针方式调用,由函数指针本身的类型决定调用哪个foo
    return 0;
}







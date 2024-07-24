// 引用作为函数的形参
// 我们在设计一个函数时,只要你能保证在函数内部绝对不修改实参,那么就大胆的加上const
#include <iostream>
using namespace std;
void Swap( int& x, int& y ) { // 非常引用型形参:函数内部可以修改实参
    int z = x;
    x = y;
    y = z;
}
void Swap( int* x, int* y ) {
    int z = *x;
    *x = *y;
    *y = z;
}
void Print( const int& x, const int& y ) { // 常引用型形参
//  x = 888;
    cout << x << ' ' << y << endl;
}
int main( void ) {
    int a=10, b=20;
    Swap(a,b);
//  Swap(&a, &b);
    cout << "a=" << a << ", b=" << b << endl;
    Print( a, b );
    Print( 666,999 );
    return 0;
}







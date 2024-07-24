// 缺省(默认)参数:带默认值的形参
// 默认值不是初始值
#include <iostream>
using namespace std;

void foo( int a, double b=3.14, float c=3.1, short d=2, char e='A' ); // 声明

void foo( int a ) {

}

int main( void ) {
    foo( 3, 3.14, 3.1, 2 );
    foo( 3, 3.14, 3.1, 2, 'B' );

//  foo( 10 );
    return 0;
}
void foo( int a, double b, float c, short d, char e ) { // 定义
     cout << "e=" << e << endl;
}







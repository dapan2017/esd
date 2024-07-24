// 函数模板的重载
#include <iostream>
using namespace std;

void Max( int x, int y ) { // 普通函数
    cout << "1. Max(int,int)" << endl;
}

template<typename T>void Max( T x, T y ) { // 函数模板
    cout << "2. Max(T,T)" << endl;
}

int main( void ) {
    int nx=10, ny=20;
    Max(nx,ny); // 1
    Max<>(nx,ny); // 2
    
    double dx=1.23, dy=4.56;
    Max(dx,dy); // 2

    Max(nx,dy); // 1
    return 0;
}










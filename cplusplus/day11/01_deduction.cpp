// 隐式推断类型实参
#include <iostream>
using namespace std;

template<typename T>T Max( T x, T y ) { // 类型形参 和 调用形参 相关
    return x > y ? x : y;
}
template<typename T, typename D>void Bar(D x) { // 类型形参 和 调用形参 不完全相关
}
template<typename R, typename T>R Hum( T x ) { // 返回值类型不能隐式推断
    R r;
    return r;
} 
int main( void ) {
    Bar<double>(100);
    Hum<float>(200); 

    int nx=10, ny=20;
    cout << Max(nx,ny) << endl; // Max<int>(nx,ny)

    double dx=1.23, dy=4.56;
    cout << Max(dx,dy) << endl; // Max<double>(dx,dy)

    string sx="world", sy="hello";
    cout << Max(sx,sy) << endl; // Max<string>(sx,sy)

    Max(nx,(int)dy); // 隐式推断类型实参的同时编译器不做隐式类型转换
    return 0;
}










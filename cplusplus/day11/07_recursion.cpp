// 类模板的递归实例化
#include <iostream>
#include <iomanip>
using namespace std;
template<typename T>class Array {
public:
    T& operator[](size_t index) {
        return arr[index];
    }
private:
    T arr[10];
};
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Array< Array<int> > b; // b对象当做二维数组使用
    for( int i=0; i<10; i++ ) {
        for( int j=0; j<10; j++ ) {
            b[i][j] = i*j;
        }
    }
    for( int i=1; i<10; i++ ) {
        for( int j=1; j<=i; j++ ) {
            cout << j << 'X' << i << '=';         
            cout << setw(2) << left << b[i][j] << ' ';
        }
        cout << endl;
    }
    /*
    Array<int> a; // a对象当做一维数组使用
    for( int i=0; i<10; i++ ) {
        a[i] = 1000+i;
    }
    for( int i=0; i<10; i++ ) {
        cout << a[i] << ' ';
    }
    cout << endl;
    */
    return 0;
}










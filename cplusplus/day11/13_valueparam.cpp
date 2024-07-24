// 类型形参表中 可以出现 数值型参数
#include <iostream>
#include <iomanip>
using namespace std;
template<typename T, int S=10>class Array {
public:
    T& operator[](size_t index) {
        return arr[index];
    }
    int size() {  return S; }
private:
    T arr[S];
};
// 以上代码模拟类模板的设计者
// --------------------
// 以下代码模拟用户
int main( void ) {
    Array<int,15> a; // a对象当做一维数组使用
    for( int i=0; i<a.size(); i++ ) {
        a[i] = 1000+i;
    }
    for( int i=0; i<a.size(); i++ ) {
        cout << a[i] << ' ';
    }
    cout << endl;
}










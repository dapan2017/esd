// 引用型返回值
#include <iostream>
using namespace std;
int g_value = 0;
int& foo() { // 非常引用型返回值:通过这个引用可以修改目标
    return g_value;
}
const int& fooo() { // 常引用型返回值:通过这个引用不能修改目标
    return g_value;
}
int& bar() {
    static int s_value=0;//程序启动就执行,而且只执行一次
    cout << "s_value=" << s_value << endl;
    return s_value;
}
int& hum() {
    int* pn = new int;
    return *pn;
}
int& fun( int& x ) {
    // ...
    return x; // 返回 引用型参数 本身
}
int& boo() {
    int m = 100;
    return m;
}
int main( void ) {
//  boo(); // 风险极大

    foo() = 100;
    cout << "g_value=" << g_value << endl;
//  fooo() = 100; // readonly err

    bar() = 200;
    bar();

    hum() = 300;
    
    int a_value = 0;
    fun( a_value ) = 400;
    cout << "a_value=" << a_value << endl;
    return 0;
}







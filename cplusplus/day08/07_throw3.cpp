// 捕获异常的匹配顺序：顺序匹配 而非 最优匹配
#include <iostream>
using namespace std;
class A {};
class B : public A {};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
void foo() {
    throw B(); // 抛出的为子类对象
}
int main( void ) {
    try {
        foo();
    }
    catch( B& e ) {
        cout << "catch(B&)" << endl;
    }
    catch( A& e ) {
        cout << "catch(A&)" << endl;
    }
    return 0;
}






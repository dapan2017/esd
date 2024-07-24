// 必须自己写this的情况
#include <iostream>
using namespace std;
class Integer; // 短式声明
void Print( Integer* v ) {
    // ...
}
class Integer {
public:
    void setinfo( /* Integer* this */ int i ) {
        this->i = i; // (1)必须自己添加this
    }
    void getinfo( /* Integer* this */ ) {
        cout << /*this->*/i << endl; // 这里的this编译器补
        Print( this ); //(3)必须自己写this
    }
    Integer& increment( /* Integer* this */ ) {
        ++/*this->*/i;
        return *this; //(2) 返回基于this指针的自引用
    }
private:
    int i; 
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Integer ix;
    ix.setinfo( 666 );
    ix.getinfo();
    ix.increment().increment().increment(); // 串联调用
    ix.getinfo();
    return 0;
}







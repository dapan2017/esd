// 简易的栈结构
#include <iostream>
using namespace std;
class Stack {
public:
    Stack():len(0) {
        //【int arr[20];】
        //【int len=0;】
    }
    void push( int data ) { // 判满操作(自己写)
        arr[len++] = data;
    }
    int pop() { // 判空操作(自己写)
        return arr[--len];
    }
private:
    int arr[20]; // 保存数据
public:
    int len; // 保存数据个数
    const int& operator[]( /* const Stack* this */ size_t index) const { // 常函数
        return this->arr[index];
    }
    int& operator[]( /* Stack* this */ size_t index) { // 非常函数
        return this->arr[index];
    }
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Stack s; // 非常容器的元素是非常左值
    for( int i=0; i<20; i++ ) {
        s.push( 1000+i );
    }
    cout << "压入数据后s容器中数据的个数:" << s.len << endl;

    s[5] = 888; // s[5]是非常左值   s.operator[](5)
    for( int i=0; i<20; i++ ) {
        cout << s[i] << ' ';
    }
    cout << endl;
    cout << "读数据后s容器中数据的个数:" << s.len << endl;

    const Stack cs = s; // cs是常容器,元素应该也要为常左值
    cs[5] = 999; // cs.operator[](5)  编译器将报告readonly-错误   cs[5]是常左值
    /*
    int s[20]; // 非常容器的元素是非常左值
    s[5] = 888; // s[5]就是非常左值

    const int cs[20]={...}; // 常容器的元素是常左值
    cs[5] = 999; // 编译器将报告readonly-错误   cs[5]是常左值
    */
    return 0;
}








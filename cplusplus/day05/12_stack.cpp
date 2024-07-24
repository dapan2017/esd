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
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Stack s; // 栈容器
    for( int i=0; i<20; i++ ) {
        s.push( 1000+i );
    }
    cout << "压入数据后s容器中数据的个数:" << s.len << endl;

    /*
    for( int i=0; i<20; i++ ) {
        cout << s.pop() << ' ';
    }
    cout << endl;
    cout << "读取数据后s容器中数据的个数:" << s.len << endl;
    */
    return 0;
}








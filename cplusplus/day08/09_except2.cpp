// 没有异常说明 和 异常说明为空
#include <iostream>
using namespace std;

void foo() { // 没有异常说明
    throw 3.14; // -1; // "hello"; 
}

void bar() throw() { // 异常说明为空
    throw -1;
}

void hum() throw(int,double); // 声明

void hum() throw(int,double) { // 定义

}


// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    try {
//        bar();
        foo();
    }
    catch( ... ) { // 忽略异常（捕获 但 不处理）
    
    }
    /*
    catch( int& e ) {
        cout << "1. catch(int):" << e << endl;
    }
    catch( double& e ) {
        cout << "2. catch(double):" << e << endl;
    }
    catch( const char* e ) {
        cout << "3. catch(const char*):" << e << endl;
    }
    */
    return 0;
}






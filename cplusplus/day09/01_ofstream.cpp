#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的 ofstream(输出文件流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    ofstream ofs1("./ofs"/*, ios::out*/);
    if( !ofs1 ) { // ! ofs1.operator bool()
        cerr << "ofs1流对象状态错误--打开文件失败" << endl;
    }
    ofs1 << 1234 << ' ' << 56.78 << ' ' << "hello" << '\n';
    if( !ofs1 ) { // ! ofs1.operator bool()
        cerr << "ofs1流对象状态错误--写文件失败" << endl;
    }
    ofs1.close();

    ofstream ofs2("./ofs", ios::app);
    if( !ofs2 ) { // ! ofs2.operator bool()
        cerr << "ofs2流对象状态错误--打开文件失败" << endl;
    }
    ofs2 << "world" << endl;
    if( !ofs2 ) { // ! ofs2.operator bool()
        cerr << "ofs2流对象状态错误--写文件失败" << endl;
    }
    ofs2.close();
    return 0;
}







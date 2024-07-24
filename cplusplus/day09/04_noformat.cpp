#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的 ofstream(输出文件流类) / ifstream(输入文件流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    ofstream ofs("./noformat", ios::out);
    if( !ofs ) {
        cerr << "ofs流对象状态错误--打开文件失败" << endl;
    }
    for( char c=' '; c<='~'; c++ ) {
        ofs.put(c).flush();
    }
    ofs.close();

    ifstream ifs("./noformat", ios::in);
    if( !ifs ) {
        cerr << "ifs流对象状态错误--打开文件失败" << endl;
    }
    char c;
    // 单参get
    while(1) {
        ifs.get(c);
        if( ifs ) {
            cout << c;
        } else {
            break;
        }
    }
    cout << endl;

    ifs.clear();
    ifs.seekg(0, ios::beg);

    // 无参get
    while(1) {
        c = ifs.get();
        if( c!=EOF ) {
            cout << c;
        } else {
            break;
        }
    }
    cout << endl;
    ifs.close();
    return 0;
}







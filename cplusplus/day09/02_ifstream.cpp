#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的 ifstream(输入文件流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    ifstream ifs1("./ofs", ios::in);
    if( !ifs1 ) { // ! ifs1.operator bool()
        cerr << "ifs1流对象状态错误--打开文件失败" << endl;
    }
    int i;  double d;   string s1, s2;
    cout << "-------------第一次读取-----------------" << endl;
    ifs1 >> i >> d >> s1 >> s2;
    if( !ifs1 ) { // ! ifs1.operator bool()
        cerr << "ifs1流对象状态错误--读文件失败" << endl;
    }
    cout << i << ' ' << d << ' ' << s1 << ' ' << s2 << endl;
    ifs1.close();

    ifstream ifs2("./ofs", ios::ate);
    if( !ifs2 ) { // ! ifs2.operator bool()
        cerr << "ifs2流对象状态错误--打开文件失败" << endl;
    }

    ifs2.seekg(0, ios::beg);

    int ii; double dd;  string ss1, ss2;
    cout << "-------------第二次读取-----------------" << endl;
    ifs2 >> ii >> dd >> ss1 >> ss2;
    if( !ifs2 ) { // ! ifs2.operator bool()
        cerr << "ifs2流对象状态错误--读文件失败" << endl;
    }
    cout << ii << ' ' << dd << ' ' << ss1 << ' ' << ss2 << endl;
    ifs2.close();
    return 0;
}







#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的 ifstream(输入文件流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    
    ifstream ifs2("./ofs", ios::ate);
    if( !ifs2 ) { // ! ifs2.operator bool()
        cerr << "ifs2流对象状态错误--打开文件失败" << endl;
    }

    int ii; double dd;  string ss1, ss2;
    cout << "-------------第一次读取-----------------" << endl;
    ifs2 >> ii >> dd >> ss1 >> ss2;
    if( !ifs2 ) { // ! ifs2.operator bool()
        cerr << "ifs2流对象状态错误--读文件失败" << endl;
        cerr << "ifs2是0状态吗?" << ifs2.good() << ", ifs2是1状态吗?" << ifs2.bad()
             << ", ifs2是2状态吗?" << ifs2.eof() << ", ifs2是4状态吗?" 
             << ifs2.fail() << endl;

        cerr << "ifs2具体状态值:" << ifs2.rdstate() << endl;
    }
    cout << ii << ' ' << dd << ' ' << ss1 << ' ' << ss2 << endl;

    ifs2.clear();
    ifs2.seekg(0, ios::beg);

    cout << "-------------第二次读取-----------------" << endl;
    ifs2 >> ii >> dd >> ss1 >> ss2;
    if( !ifs2 ) { // ! ifs2.operator bool()
        cerr << "ifs2流对象状态错误--读文件失败" << endl;
        cerr << "ifs2是0状态吗?" << ifs2.good() << ", ifs2是1状态吗?" << ifs2.bad()
             << ", ifs2是2状态吗?" << ifs2.eof() << ", ifs2是4状态吗?" 
             << ifs2.fail() << endl;

        cerr << "ifs2具体状态值:" << ifs2.rdstate() << endl;
    }
    cout << ii << ' ' << dd << ' ' << ss1 << ' ' << ss2 << endl;
    ifs2.close();
    return 0;
}







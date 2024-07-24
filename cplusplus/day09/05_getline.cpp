#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的  ifstream(输入文件流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    ifstream ifs("./getline", ios::in);
    if( !ifs ) {
        cerr << "ifs流对象状态错误--打开文件失败" << endl;
    }
    char buf[256];
    while(1) {
        ifs.getline(buf,256,'\n'); 
        if( ifs ) {
            cout << buf << endl;
        } else {
            break;
        }
    }
    /*
    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;

    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;
    
    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;

    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;

    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;

    ifs.getline(buf,256,'\n'); // 
    cout << buf << endl;
    cout << "ifs流对象的状态值:" << ifs.rdstate() << endl;
    */
    ifs.close();
    return 0;
}







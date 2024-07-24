#include <iostream>
#include <fstream>
using namespace std;

// C++标准库中的  ifstream(输入文件流类) / ofstream(文件输出流类)

// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    ofstream ofs("./zjw",ios::out);
    if( !ofs ) {
        cerr << "ofs流对象状态错误--打开文件失败" << endl;
    }

    ifstream ifs("./getline", ios::in);
    if( !ifs ) {
        cerr << "ifs流对象状态错误--打开文件失败" << endl;
    }
    char buf[3];
    while(1) {
        ifs.read(buf,3); // 
        if( ifs ) {
            // 读满了3个字节
            ofs.write(buf,3);
        } else {
            // 没读满3个字节
            int len = ifs.gcount();
            ofs.write(buf,len);
            break;
        }
    }
    ofs.close();
    ifs.close();
    return 0;
}







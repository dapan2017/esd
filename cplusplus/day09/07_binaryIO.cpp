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

    ifstream ifs("./getline", ios::ate);
    if( !ifs ) {
        cerr << "ifs流对象状态错误--打开文件失败" << endl;
    }

    int size = ifs.tellg();
    char buf[size];
    ifs.seekg(0, ios::beg);
        
    ifs.read(buf,size); 
            
    ofs.write(buf,size);
    
    ofs.close();
    ifs.close();
    return 0;
}







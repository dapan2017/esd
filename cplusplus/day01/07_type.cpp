// C++的复合类型
//
#include <iostream>
#include <cstring>
using namespace std;
void testStruct() {
    struct Student {
        int m_age; // 成员变量
        char m_name[256]; // 成员变量
        void getinfo() { // 成员函数
            cout << m_name << ":" << m_age << endl;
        }
    };
    /*struct*/ Student s;
    s.m_age = 22;
    strcpy(s.m_name, "张飞");
    s.getinfo();
    cout << "姓名:" << s.m_name << ", 年龄:" << s.m_age << endl;
}
void testUnion() {
    union { // 匿名联合主要想体现 成员的内存排布方式(共用同一块内存空间)
        int i;
        char c[4];
    };                                   
    i = 0x12345678; // 小低低:小端字节序 低数位 占 低地址
    cout << hex << (int)c[0] << ' ' << (int)c[1] << ' ' 
         << (int)c[2] << ' ' << (int)c[3] << endl;
}
void testEnum() {
    enum Color{ red, green, blue };
    /*enum*/ Color c = red; // 0;-err
    cout << "c=" << c << endl;
}
void testBool() {
    bool a = ""; // "fdsfds"; // 0.00000000001; // 123; // true;
    bool b = NULL;       // 0.00000000000;// 0;   // false;
    cout << "a=" << a << ", b=" << b << endl;
}
int main( void ) {
    testBool( );
//  testEnum( );
//  testUnion( );
//  testStruct( );
    return 0;
}







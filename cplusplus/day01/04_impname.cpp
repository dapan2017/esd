// 名字空间声明
#include <iostream>
using namespace std;
namespace ns {
    int g_value = 0;
}

int g_value = 0;
using ns::g_value;///从这行代码开始,ns中的g_value引入当前作用域(相当于定义)

int main( void ) {
//    int g_value = 0;
    g_value = 888;
    // using ns::g_value;//从这行代码开始,ns中的g_value引入当前作用域(相当于定义)
      
    cout << "ns::g_value=" << ns::g_value << endl;
    return 0;
}

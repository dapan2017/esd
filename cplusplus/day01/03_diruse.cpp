// 名字空间指令
#include <iostream>
using namespace std;
namespace ns {
    int g_value = 0;
}

//int g_value = 0;
//using namespace ns;//从这行代码开始,ns中的内容在当前作用域 可见

int main( void ) {
//  int g_value = 0;
    using namespace ns;//从这行代码开始,ns中的内容在当前作用域 可见
    g_value = 888; // 5 / 8 / err
    /*std::*/cout << "ns::g_value=" << g_value << /*std::*/endl;
    return 0;
}

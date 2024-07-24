// 名字空间的嵌套
#include <iostream>
using namespace std;

namespace ns1 {
    int g_value = 100;
    namespace ns2 {
        int g_value = 200;
        namespace ns3 {
            int g_value = 300;
            namespace ns4 {
                int g_value = 400;
            }
        }
    }
}

int main( void ) {
    namespace ns_four = ns1::ns2::ns3::ns4;
    // 名字空间别名 可以简化书写
    cout << ns_four::g_value << endl;
    return 0;
}

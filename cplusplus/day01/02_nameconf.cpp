#include <iostream>
namespace ICBC {
    int g_money = 0;
    void save( int money ) {
        g_money += money;
    }
}   
namespace CCB {
    int g_money = 0;
    void save( int money ) {
        g_money += money;
    }
    void pay( int money ); // 声明
}

void CCB::pay( int money ) { // 定义
    g_money -= money;
}
namespace ICBC {
    void pay( int money ) {
        g_money -= money;
    }
}
int main( void ) {
    ICBC::save( 10000 );
    ICBC::pay( 3000 );
    std::cout << "工行卡余额:" << ICBC::g_money << std::endl;
    
    CCB::save( 20000 );
    CCB::pay( 3000 );
    std::cout << "建行卡余额:" << CCB::g_money << std::endl;
    return 0;
}

// 声明 和 定义 分开写
#include <iostream>
#include <cstring>
using namespace std;
class Human {
public: 
    Human( /* Human* this */ int age=0, const char* name="无名" );//声明
    void getinfo( /* Human* this */ ); // 声明 
private:
    int m_age; // 声明
    char m_name[256]; // 声明
};
    
Human::Human( /* Human* this */ int age, const char* name ) {//定义
    // 在this所指向的内存空间中 定义m_age,初值为随机数
    // 在this所指向的内存空间中 定义m_name,初值为随机数
    cout << "Human类的构造函数被调用" << endl;    
    m_age = age;
    strcpy( m_name, name );
}
void Human::getinfo( /* Human* this */ ) { // 定义
    cout << "姓名:" << m_name << ", 年龄:" << m_age << endl;
}
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human h(22,"张飞"); // 定义h(给h分配内存空间),利用h.Human(22,"张飞")
    h.getinfo(); 
    return 0;
}







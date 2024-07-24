// 构造函数:函数名必须与类名相同,没有返回值类型
#include <iostream>
#include <cstring>
using namespace std;
class Human {
public: 
    Human( /* Human* this */ int age=0, const char* name="无名" ) {
        // 在this所指向的内存空间中 定义m_age,初值为随机数
        // 在this所指向的内存空间中 定义m_name,初值为随机数
        cout << "Human类的构造函数被调用" << endl;    
        m_age = age;
        strcpy( m_name, name );
    }
//    void setinfo( /* Human* this */ int age=0, const char* name="无名" ) {
//        this->m_age = age;
//        strcpy( this->m_name, name );
//    }
    void getinfo( /* Human* this */ ) { 
        cout << "姓名:" << this->m_name << ", 年龄:" << this->m_age << endl;
    }
private:
    int m_age; // 声明
    char m_name[256]; // 声明
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者
int main( void ) {
    Human h(22,"张飞"); // 定义h(给h分配内存空间),利用h.Human(22,"张飞")

    cout << "h对象创建完毕" << endl; 
//  h.setinfo( 22, "张飞" ); 
    h.getinfo(); 

    return 0;
}







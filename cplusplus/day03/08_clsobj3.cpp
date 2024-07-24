// 定义对象的 11 种方法
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
    Human(32,"马超").getinfo();
    //定义 匿名Human类对象,利用 匿名Human类对象.Human(..)

    Human h(22,"张飞"); // 定义h(给h分配内存空间),利用h.Human(22,"张飞")
    h.getinfo(); 

    Human h2; // 定义h2,利用h2.Human()
    h2.getinfo();

    Human h3[3]; // 定义了3个Human类对象,并分别利用这3个Human类对象.Human()
    for( int i=0; i<3; i++ ) {
        h3[i].getinfo();
    }

    Human h4[3] = { Human(22,"张飞"), Human(20,"赵云"), Human(25,"关羽") };
    for( int i=0; i<3; i++ ) {
        h4[i].getinfo();
    }

    Human h5[]={Human(22,"张飞"), Human(20,"赵云"), Human(25,"关羽")};
    for( int i=0; i<sizeof(h5)/sizeof(h5[0]); i++ ) {
        h5[i].getinfo();
    }

    Human* ph=new Human; // 定义Human类堆对象,利用Human类堆对象.Human()
    (*ph).getinfo(); 
    delete ph;
    ph = NULL;

    Human* ph2=new Human(); // 定义Human类堆对象,利用Human类堆对象.Human()
    (*ph2).getinfo();
    delete ph2;
    ph2 = NULL;

    Human* ph3 = new Human(45,"黄忠");
                //定义Human类堆对象,利用Human类堆对象.Human(45,"黄忠")
    (*ph3).getinfo();
    delete ph3;
    ph3 = NULL;

    Human* ph4 = new Human[3];
                //定义了3个Human类堆对象,分别利用这3个Human类堆对象.Human()
    for( int i=0; i<3; i++ ) {
        ph4[i].getinfo();
    }
    delete[] ph4;
    ph4 = NULL;

    Human *ph5 = new Human[3]{
                Human(18,"武松"), Human(19,"李逵"), Human(20,"鲁达")};
    for( int i=0; i<3; i++ ) {
        ph5[i].getinfo();
    }
    delete[] ph5;
    ph5 = NULL;

    return 0;
}









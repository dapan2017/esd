// vector容器
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
class Student {
public:
    Student( const char* name="无名" ) : m_name(name) {
        cout << "缺省构造了:" << m_name << "(" << this << ")" << endl;
    }
    Student( const Student& that ) : m_name(that.m_name) {
        cout << "用:" << that.m_name << "(" << &that << ")" << "克隆了:"
             << m_name << "(" << this << ")" << endl;
    }
    ~Student() {
        cout << "析构了:" << m_name << "(" << this << ")" << endl;
    }
private:
    string m_name;
};

int main( void ) {
    vector<Student> vs{ Student("文哥"),Student("闵神"),Student("游哥") };
    vs.reserve(20);
    vs.resize(2);
    vs.push_back(Student("超哥"));
    vs.push_back(Student("华哥"));
    vs.push_back(Student("也哥"));
    getchar();
    return 0;
}










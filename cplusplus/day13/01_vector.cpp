// vector容器
#include <iostream>
#include <algorithm> // find / sort
#include <vector>
using namespace std;
// 如果自己的设计的类对象保存在容器中，那么容器需要的功能自己的设计的类型必须具备
class Student {
public:
    Student( const char* name="无名",int age=0 ) : m_name(name),m_age(age) {}
    Student( const Student& that ) : m_name(that.m_name),m_age(that.m_age) {}
    ~Student() {}
    bool operator==( const Student& that ) const {
        return m_name==that.m_name && m_age==that.m_age;
    }
    bool operator<( const Student& that ) const {
        return m_age<that.m_age;
    }
    bool operator>( const Student& that ) const {
        return m_age>that.m_age;
    }
private:
    string m_name;
    int m_age;
    friend ostream& operator<<( ostream& os, const Student& that );
};
ostream& operator<<( ostream& os, const Student& that ) {
    os << that.m_name << ":" << that.m_age;
    return os;
}
void Print( const string& str, const vector<Student>& v ) {
    cout << str << endl;
    typedef vector<Student>::const_iterator CIT;
    for( CIT cit=v.begin(); cit!=v.end(); ++cit ) {
        cout << *cit << ' ';
    }
    cout << endl << "---------------------" << endl;
}
class ZJW { // 比较类
public:
    bool operator()( const Student& a, const Student& b) {
        return a > b;
    }
};
int main( void ) {
    vector<Student> vs;
    vs.reserve(20);
    vs.push_back(Student("张飞",22));
    vs.push_back(Student("赵云",20));
    vs.push_back(Student("关羽",25));
    vs.push_back(Student("马超",32));
    vs.push_back(Student("黄忠",42));
    Print("添加节点后:", vs);

    vs.insert(vs.begin(), Student("张超",18));
    Print("迭代器指向的位置添加节点后:", vs);

    vs.erase(--vs.end());
    Print("删除迭代器指向的节点后:", vs);

    typedef vector<Student>::iterator IT;
    IT it = ++vs.begin();
    *it = Student("张竞也",17);
    Print("修改迭代器指向的节点后:", vs);
  
    // 内部利用"=="进行比较
    IT fit = find(vs.begin(), vs.end(), Student("赵云",20));
    if( fit != vs.end() ) {
        vs.erase( fit );
    }
    Print("找到赵云并删除后:", vs);

//  sort(vs.begin(), vs.end()); // "<"  
//  sort(vs.begin(), vs.end(), ZJW());
    sort(vs.begin(), vs.end(), greater<Student>());
    
    Print("排序后:", vs);
    return 0;
}










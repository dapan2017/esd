#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    Student(const char* name = "",int age = 0):m_name(name),m_age(age){}
    Student(const Student& that):m_name(that.m_name),m_age(that.m_age){}
    bool operator==(const Student& that){return m_name == that.m_name && m_age==that.m_age;}

    ~Student(){}
    friend ostream& operator<<(ostream& os,const Student& that);
private:
    string m_name;
    int m_age;
};
// ostream& operator<<(ostream& os,const Student& that){
//     os << that.m_name << ":" << that.m_age << endl;
//     return os;
// }
void Print(const char* str,vector<Student>& s){
    cout << str << endl;
    typedef vector<Student>::iterator IT;
    for(IT it = s.begin();it!=s.end();it++){
        cout << (*it).m_name ;
    }
    cout << endl;
}
int main(void){

    vector<Student> vv;
    vv.reserve(20);
    vv.push_back(Student("liubei",56));
    vv.push_back(Student("guanyu",36));
    vv.push_back(Student("zhangfei",45));
    vv.push_back(Student("caocao",65));
    vv.push_back(Student("dongzuo",12));

    Print("添加节点后：",vv);

    vv.insert(vv.begin(),Student("hanwang",78));
    Print("头部添加节点后：",vv);

    vv.erase(vv.begin());
    vv.erase(--vv.end());
    Print("删除头尾节点后：",vv);
    return 0;
}
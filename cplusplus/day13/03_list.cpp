// list容器
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void Print( const string& str, const list<int>& l ) {
    cout << str << endl;
    typedef list<int>::const_iterator CIT;
    for( CIT cit=l.begin(); cit!=l.end(); ++cit ) {
        cout << *cit << ' ';
    }
    cout << endl << "-----------------------" << endl;
}
//
//  自己设计的比较类
//
class ZJW {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};
int main( void ) {
    list<int> ls; // ls是非常容器
    for( int i=0; i<5; i++ ) {
        ls.push_front(100+i);
    }
    for( int i=0; i<5; i++ ) {
        ls.push_back(10+i);
    }
    Print("添加节点后:", ls);
    
    ls.pop_front();
    ls.pop_back();
    Print("删除节点后:",ls);
    
    ls.insert(++ls.begin(),888); // 增
    Print("迭代器指向的位置添加节点后:", ls);
    
    ls.erase( --ls.end() ); // 删
    Print("删除迭代器指向的节点后:", ls);
    
    typedef list<int>::iterator IT;
    IT it = ls.begin();
    *it = 999; // 改
    Print("修改迭代器指向的节点后:", ls);
    
    IT fit = find(ls.begin(), ls.end(), 100); // 查
    if( fit != ls.end() ) {
        ls.erase( fit );
    }
    Print("找到100并删除后:", ls);
  
//  ls.sort();
//  ls.sort(ZJW());
    ls.sort(greater<int>());
    Print("排序后:", ls); 

    ls.push_front(10);
    ls.push_back(10);
    Print("唯一化之前:", ls);
    ls.unique();
    Print("唯一化之后:", ls);

    list<int> lst;
    lst.push_back(1000);
    lst.push_back(2000);
    lst.push_back(3000);
    lst.push_back(4000);

//  ls.splice(ls.begin(),lst);  
//  ls.splice(++ls.begin(),lst, ++lst.begin());
  
    ls.splice(++ls.begin(),lst, ++lst.begin(),--lst.end());
    Print("调用列表ls:", ls);
    Print("参数列表lst:", lst);














    const list<int> cls = ls; // cls是常容器
    typedef list<int>::const_iterator CIT;

        CIT cit = cls.begin();
//  *cit = 444;
    Print("常容器:", cls );
    
    return 0;
}










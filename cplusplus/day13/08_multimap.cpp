// multimap容器
#include <iostream>
#include <map>
using namespace std;
int main( void ) {
    multimap<string,int> m{ {"张飞",90} };
    m.insert( pair<string,int>("赵云",80) );
    m.insert( make_pair("关羽",70) );
    m.insert( { {"张飞",60},{"赵云",50},{"关羽",40} } );
    
    typedef multimap<string,int>::iterator IT;
    for( IT it=m.begin(); it!=m.end(); ++it ) {
        cout << (*it).first << ":" << (*it).second << endl;
    }
    return 0;
}










// set容器
#include <iostream>
#include <set>
using namespace std;
int main( void ) {
    set<int> s{ 5,8 };
    s.insert(9);
    s.insert( {3,4,7,6} );
    s.insert(9);

    cout << "s的节点个数:" << s.size() << endl;

    typedef set<int>::iterator IT;
    for( IT it=s.begin(); it!=s.end(); ++it ) {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}










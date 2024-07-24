// stack容器
#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

int main( void ) {
//  stack<int,deque<int> > s;
//  stack<int,vector<int> > s;
    stack<int,list<int> > s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    while( !s.empty() ) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}










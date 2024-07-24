// queue容器
#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

int main( void ) {
//  queue<int,deque<int> > q;
//  queue<int,list<int> > q;
//  queue<int,vector<int> > q; // vector不可以作为queue底层容器
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    while( !q.empty() ) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}










// priority_queue容器
#include <iostream>
#include <queue>
#include <list>
#include <deque>
using namespace std;
class ESDTN2405 {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};
int main( void ) {
//  priority_queue<int,vector<int>, greater<int> > pq;
//  priority_queue<int,deque<int>, greater<int> > pq;
//  priority_queue<int,list<int>, greater<int> > pq;//list不可以作为优先队列的底层容器
    priority_queue<int> pq;
    pq.push(5);
    pq.push(8);
    pq.push(9);
    pq.push(3);
    pq.push(4);
    pq.push(7);
    pq.push(6);

    while( !pq.empty() ) {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}










// map容器
#include <iostream>
#include <map>
using namespace std;
class Candidate {
public:
    Candidate( const char* name="" ) : m_name(name),m_vote(0) {}
    string getName() {  return m_name;  }
    int getVote() {  return m_vote; }
    void setVote() {  ++m_vote;  }
private:
    string m_name;
    int m_vote;
};
void Print( map<char,Candidate>& m ) {
    typedef map<char,Candidate>::iterator IT;
    for( IT it=m.begin(); it!=m.end(); ++it ) {
        cout << "(" << (*it).first << ")" << (*it).second.getName() << ' ';
    }
    cout << endl;
}
int main( void ) {
    map<char,Candidate> m{ {'A',Candidate("张飞")} };
    m.insert( pair<char,Candidate>('B',Candidate("赵云")) );
    m.insert( make_pair('C',Candidate("关羽")) );
    m.insert( { {'D',Candidate("马超")} } );
    m['E'] = Candidate("黄忠");
    typedef map<char,Candidate>::iterator IT;
    for( int i=0; i<10; ++i ) {
        Print( m );
        char ch;
        cin >> ch;
        IT fit = m.find(ch);
        if( fit != m.end() ) {
            (*fit).second.setVote();
        } else{
            cout << "废票" << endl;
            continue;
        }
        /*
        try {
            m.at(ch).setVote();
        }
        catch( out_of_range& e ) {
            cout << "废票" << endl;
            continue;
        }
        */
    }
    IT winner = m.begin();
    for( IT it=m.begin(); it!=m.end(); ++it ) {
        cout << (*it).second.getName() << ":" << (*it).second.getVote() << endl;
        if( (*winner).second.getVote() < (*it).second.getVote() ) {
            winner = it;
        }
    }
    cout << "恭喜:" << (*winner).second.getName() << "高票当选美国总统" << endl;
    return 0;
}










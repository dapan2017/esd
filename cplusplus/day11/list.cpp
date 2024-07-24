// 简易链表容器
#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>class list {
public:
//  
//  缺省构造
//
    list() : m_head(NULL),m_tail(NULL) {}
//
//  拷贝构造
//    list( const list& that ) : m_head(NULL),m_tail(NULL) {
        for( node* pnode=that.m_head; pnode!=NULL; pnode=pnode->m_next ) {
            push_back( pnode->m_data ); 
        }
    }
//
//  析构函数//    ~list() {        clear();
//
//  链表判空//
    bool empty() {
        return m_head==NULL && m_tail==NULL  ;
    }
//
//  添加头节点
//
    void push_front( const T& data ) {
        m_head = new node(NULL,data,m_head);
        if( m_head->m_next )
            m_head->m_next->m_prev = m_head;
        else
            m_tail = m_head;
    }
//
//  添加尾节点
//
    void push_back( const T& data ) {
        m_tail = new node(m_tail,data,NULL);
        if( m_tail->m_prev ) 
            m_tail->m_prev->m_next = m_tail;
        else
            m_head = m_tail;
    }
//
//  删除头节点
//
    void pop_front() throw(underflow_error) {
        if( empty() )
            throw underflow_error("null node");
        node* pnext = m_head->m_next;
        delete m_head;
        if( pnext )
            pnext->m_prev = NULL;
        else
            m_tail = NULL;
        m_head = pnext;
    }
//
//  删除尾节点
//
    void pop_back() throw(underflow_error) {
        if( empty() )
            throw underflow_error("null node");
        node* pprev = m_tail->m_prev;
        delete m_tail;
        if( pprev )
            pprev->m_next = NULL;
        else
            m_head = NULL;
        m_tail = pprev;
    }
//
//  获取头节点数据
//
    T& front() throw(out_of_range) {
        if( empty() )
            throw out_of_range("null node");
        return m_head->m_data;
    }
//
//  获取尾节点数据
//
    T& back() throw(out_of_range) {
        if( empty() )
            throw out_of_range("null node");
        return m_tail->m_data;
    }
//
//  清空链表
//
    void clear() {
        while( !empty() ) {
            pop_front();
        }
    }
//
//  获取链表容器大小(节点个数)
//
    size_t size() {
        size_t i=0;
        for( node* pnode=m_head; pnode!=NULL; pnode=pnode->m_next ) {
            ++i; 
        }
        return i;
    }
private:
//
//  节点类
//
    class node {
    public:
        node(node* prev,const T& data,node* next):
                        m_prev(prev),m_data(data),m_next(next) {}
        node* m_prev; // 前指针
        T m_data;
        node* m_next; // 后指针
    };
    node* m_head; // 链表头指针
    node* m_tail; // 链表尾指针
};
// 以上代码模拟STL(标准模板库)
// ---------------------------
// 以下代码模拟用户
int main( void ) {
    list<int> ls; // 空容器
     
    return 0;
}










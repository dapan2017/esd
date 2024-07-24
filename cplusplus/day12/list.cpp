// 链表容器
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
//
    list( const list& that ) : m_head(NULL),m_tail(NULL) {
        for( node* pnode=that.m_head; pnode!=NULL; pnode=pnode->m_next ) {
            push_back( pnode->m_data ); 
        }
    }
//
//  析构函数
//
    ~list() {
        clear();
    }
//
//  链表判空
//
    bool empty() const {
        return m_head==NULL && m_tail==NULL;
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
    T& front() throw(out_of_range) { // 非常函数
        if( empty() )
            throw out_of_range("null node");
        return this->m_head->m_data;
    }
    const T& front() const throw(out_of_range) { // 常函数
        if( empty() )
            throw out_of_range("null node");
        return this->m_head->m_data;
    }
//
//  获取尾节点数据
//
    T& back() throw(out_of_range) { // 非常函数
        if( empty() )
            throw out_of_range("null node");
        return m_tail->m_data;
    }
    const T& back() const throw(out_of_range) { // 常函数
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
    size_t size() const {
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
public:
//
//  正向非常迭代类
//
    class iterator {
    public:
        iterator(node*start,node*cur,node*end):m_start(start),m_cur(cur),m_end(end){}
        iterator& operator++() {
            if( m_cur==NULL )
                m_cur = m_start;
            else
                m_cur = m_cur->m_next;
            return *this;
        }
        iterator& operator--() {
            if( m_cur==NULL )
                m_cur = m_end;
            else
                m_cur = m_cur->m_prev;
            return *this;
        }
        bool operator==( const iterator& that ) const {
            return m_start==that.m_start && m_cur==that.m_cur && m_end==that.m_end;
        }
        bool operator!=( const iterator& that ) const {
            return !(*this==that);
        }
        T& operator*() throw(out_of_range) {
            if( m_cur==NULL )
                throw out_of_range("null node");
            return m_cur->m_data;
        }
    private:
        node* m_start; // 开始指向
        node* m_cur;   // 当前指向
        node* m_end;   // 终止指向
        friend class list;
    };
//
//  正向常迭代类
//
    class const_iterator {
    public:
        const_iterator(node*start,node*cur,node*end)
                                :m_start(start),m_cur(cur),m_end(end) {}
        const_iterator& operator++() {
            if( m_cur==NULL )
                m_cur = m_start;
            else
                m_cur = m_cur->m_next;
            return *this;
        }
        const_iterator& operator--() {
            if( m_cur==NULL )
                m_cur = m_end;
            else
                m_cur = m_cur->m_prev;
            return *this;
        }
        bool operator==( const const_iterator& that ) const {
            return m_start==that.m_start && m_cur==that.m_cur && m_end==that.m_end;
        }
        bool operator!=( const const_iterator& that ) const {
            return !(*this==that);
        }
        const T& operator*() throw(out_of_range) {
            if( m_cur==NULL )
                throw out_of_range("null node");
            return m_cur->m_data;
        }
    private:
        node* m_start;
        node* m_cur;
        node* m_end;
    };
//
//  起始迭代器(遍历容器)
//
    iterator begin() { // 非常函数
        return iterator(m_head,m_head,m_tail);
    }
    const_iterator begin() const { // 常函数
        return const_iterator(m_head,m_head,m_tail);
    }
//
//  终止迭代器(结束标识)
//
    iterator end() { // 非常函数
        return iterator(m_head,NULL,m_tail);
    }
    const_iterator end() const { // 常函数
        return const_iterator(m_head,NULL,m_tail);
    }
//
//  在迭代器指向的位置添加节点
//
    void insert( const iterator& loc, const T& data ) {
        if( loc==end() ) {
            push_back(data);
        } else {
            node* pnew = new node(loc.m_cur->m_prev, data, loc.m_cur );
            if( pnew->m_prev )
                pnew->m_prev->m_next = pnew;
            else
                m_head = pnew;
            pnew->m_next->m_prev = pnew;
        }
    }
//
//  删除迭代器指向的节点
//
    void erase( const iterator& loc ) throw(out_of_range) {
        if( loc==end() ) 
            throw out_of_range("null node");
        node* pdel = loc.m_cur;
        if( pdel->m_prev )
            pdel->m_prev->m_next = pdel->m_next;
        else {
            pdel->m_next->m_prev = NULL;
            m_head = pdel->m_next;
        }
        if( pdel->m_next )
            pdel->m_next->m_prev = pdel->m_prev;
        else {
            pdel->m_prev->m_next = NULL;
            m_tail = pdel->m_prev;
        }
        delete pdel;
    }
private:
    node* m_head; // 链表头指针
    node* m_tail; // 链表尾指针
};
// 
//  利用"=="操作符实现比较查找
//
template<typename IT,typename T> IT find( const IT& a, const IT& b, const T& data ) {
    for( IT it=a; it!=b; ++it ) {
        if( *it==data ) {
            return it;
        }
    }
    return b;
}
//
//  利用"<"实现的排序
//
template<typename IT>void sort( const IT& a, const IT& b ) {
    IT p = a;
    IT last = b;
    --last;
    for( IT i=a,j=last; i!=j; ) {
        while(i!=p && *i<*p) {
            ++i;
        }
        if( i!=p ) {
            swap(*i,*p);
            p = i;
        }
        while(j!=p && *p<*j) {
            --j;
        }
        if( j!=p ) {
            swap(*p,*j);
            p = j;
        }
    }
    IT it = a;
    ++it;
    if( p!=a && p!=it ) {
        sort(a,p);
    }
    it = p;
    ++it;
    if(it!=b && it!=last) {
        sort(it,b);
    }
}
//
//  利用"比较器"实现的排序
//
template<typename IT, typename CMP>void sort( const IT& a, const IT& b, CMP cmp ) {
    IT p = a;
    IT last = b;
    --last;
    for( IT i=a,j=last; i!=j; ) {
        while(i!=p && cmp(*i,*p)) { // cmp.operator()(*i,*p) 
            ++i;
        }
        if( i!=p ) {
            swap(*i,*p);
            p = i;
        }
        while(j!=p && cmp(*p,*j)) { // cmp.operator()(*p,*j) 
            --j;
        }
        if( j!=p ) {
            swap(*p,*j);
            p = j;
        }
    }
    IT it = a;
    ++it;
    if( p!=a && p!=it ) {
        sort(a,p,cmp);
    }
    it = p;
    ++it;
    if(it!=b && it!=last) {
        sort(it,b,cmp);
    }
}
//
//  容器设计者提供的比较类模板
//
template<typename T>class Greater {
public:
    bool operator()(const T& a, const T& b) {
        return a > b;
    }
};
// 以上代码模拟STL(标准模板库)
// ---------------------------
// 以下代码模拟用户
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

//  sort(ls.begin(), ls.end());
//  sort(ls.begin(), ls.end(), ZJW() );
    sort(ls.begin(), ls.end(), Greater<int>() );
    Print("排序后:", ls);


    const list<int> cls = ls; // cls是常容器
    typedef list<int>::const_iterator CIT;

    CIT cit = cls.begin();
//  *cit = 444;
    Print("常容器:", cls );
    return 0;
}










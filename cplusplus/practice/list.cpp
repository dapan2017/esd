#include<iostream>
using namespace std;

template<typename T>class list{

public:
    //缺省构造
    list():m_head(NULL),m_tail(NULL){}

    //拷贝构造
    list(const list<T>& that):m_head(NULL),m_tail(NULL){
        for(node* pnode = that.m_head;pnode!=that.m_tail;pnode = pnode->next){
            push_back(pnode->m_data);
        }
    }

    void push_back(const T& data){
        m_tail = new node(m_tail,data,NULL);
        if(m_tail->prev){
            m_tail->prev->next = m_tail;
        }else{
            m_head = m_tail;
        }
    }

    void push_front(const T& data){
        m_head = new node(NULL,data,m_head);
        if(m_head->next){
            m_head->next->prev = m_head;
        }else{
            m_tail = m_head;
        }
    }


private:
    template<typename T>class node{
    public:
        node(node* prev,T data,node* next):
                m_prev(prev),m_data(data),m_next(next){}
        node* m_prev;
        T m_data;
        node* m_next;
    };
    node* head;
    node* tail;

};





int main(void){

    return 0;
}
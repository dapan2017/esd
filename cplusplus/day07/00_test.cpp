#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <cstdio>
using namespace std;
// 设计 "通用" 的线程类
class Thread { // 抽象类
public:
    void start( /* Thread* this */ ) {
        pthread_create(&m_tid, NULL, threadfunc, this);
    }
    static void* threadfunc( void* arg ) {
        // 线程开启所要执行的操作不应该由类的设计者提供,
        // 应该用户提供,我们调用用户提供的操作.
        Thread* p = (Thread*)arg;
        p->run();

    }
    virtual void run() = 0; // 纯虚函数
private:
    pthread_t m_tid;
};
// 以上的代码模拟类的设计者(C++标准库提供,第三方提供,自己设计的)
// ------------------------------------------------
// 以下的代码模拟类的使用者

class MyThread : public Thread {
public:
    void run() {
        for(;;) {
            usleep(1000*500);
            cout << '+' << flush;
        }
    }
};
int main( void ) {
    MyThread t1;
    t1.start();
    getchar();
    return 0;
}





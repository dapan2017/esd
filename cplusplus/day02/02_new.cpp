// 动态(堆)内存分配
#include <iostream>
#include <cstdlib>
using namespace std;

int main( void ) {
    int* pm = (int*)malloc(4);
    cout << "*pm:" << *pm << endl;
    free(pm);//这行代码一旦执行结束,pm指向的内存被释放,pm变为悬空(野)指针
    pm = NULL;
    free(pm);//释放野指针后果很严重,释放空指针是安全的

    int* pn = new int(100);
    cout << "*pn:" << *pn << '\n';
    delete pn;//这行代码一旦执行结束,pn指向的内存被释放,pn变为悬空指针
    pn = NULL;
    delete pn;//释放野指针后果很严重,释放空指针是安全的

    int* parr = new int[4]{10,20,30,40};//已数组方式new,永远返回首元素地址
    for( int i=0; i<4; i++ ) {
        cout << parr[i] << ' ';
    }
    cout << endl;
    delete[] parr;

    int(*p)[4] = new int[3][4];
    delete[] p;
    try {
        new int[0xFFFFFFFFFFFFFFF];
    }
    catch( ... ) {
    
    }
    return 0;
}







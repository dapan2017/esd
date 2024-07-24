// 显式类型转换(强转)
#include <iostream>
using namespace std;

int main( void ) {
    int a;  double b;   float c;    short d;    char e;
    // 任何基本类型的变量之间都可以隐式转换
    a = b = c = d = e;
    e = d = c = b = a;
    // 任何其他类型的指针 到 void* 都可以隐式转换
    void* pv = &a; // int*-->void*
    pv = &b;
    pv = &c;
    pv = &d;
    pv = &e;
    // void* 到 任何其他类型的指针 都必须强转***************
    int* pa = static_cast<int*>(pv); // void*-->int*的反向int*-->void*可以隐式
    double* pb = static_cast<double*>(pv);
    float* pc = static_cast<float*>(pv);
    short* pd = static_cast<short*>(pv);
    char* pe = static_cast<char*>(pv);
    // 任何类型非常指针 到 同类型常指针 都可以隐式转换
    const int* cpa = pa; // int*-->const int*
    const double* cpb = pb;
    const float* cpc = pc;
    const short* cpd = pd;
    const char* cpe = pe;
    // 任何类型常指针 到 同类型非常指针 都必须强转**************
    pa = const_cast<int*>(cpa); 
    pb = const_cast<double*>(cpb);
    pc = const_cast<float*>(cpc);
    pd = const_cast<short*>(cpd);
    pe = const_cast<char*>(cpe);
    // 除了void*外,其他类型指针之间 都必须强转*******************
    pb = reinterpret_cast<double*>(pa); 
    pb = reinterpret_cast<double*>(1000);
    return 0;
}







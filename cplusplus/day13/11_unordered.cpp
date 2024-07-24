// unordered_map容器
#include <iostream>
#include <unordered_map>
using namespace std;
int main( void ) {
    unordered_map<string,int,hash<string> > um{ {"张飞",22} };
    // 构造函数中 定义hash<string>类的对象,利用这个对象("张飞")->触发小括号操作符函数
    //            定义pair<string,int>("张飞",22)-->定义pair对象
    //
    // 构造函数中 将计算出的哈希值进行处理(例如:对10取余...)
    //            将 哈希值 和 pair对象 保存到 哈希散列表相应 支脉

    um.insert( pair<string,int>("赵云",20) );
    //insert函数中 定义hash<string>类的对象,利用这个对象("张飞")->触发小括号操作符函数
    //
    //insert函数中 将计算出的哈希值进行处理(例如:对10取余...)
    //             将 哈希值 和 pair对象 保存到 哈希散列表相应 支脉

    um.insert( make_pair("关羽",25) );
    um["马超"] = 32;
    typedef unordered_map<string,int>::iterator IT;
    for( IT it=um.begin(); it!=um.end(); ++it ) {
        cout << (*it).first << ":" << (*it).second << endl;
    }
    return 0;
}










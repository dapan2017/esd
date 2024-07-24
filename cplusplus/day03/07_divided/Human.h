#ifndef __HUMAN_H
#define __HUMAN_H

class Human {
public:
    Human( int age=0, const char* name="无名" );
    void getinfo();
private:
    int m_age;
    char m_name[256];
};


#endif

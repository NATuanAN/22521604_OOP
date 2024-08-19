#include <iostream>
#include <string.h>
using namespace std;

class Friend
{
protected:
    string name;
    int age;

public:
    virtual void set() = 0;
    static float MostofTime;
    virtual float Time() = 0;
    virtual void Nhap();
};

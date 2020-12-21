#include <iostream>
#include <string>
using namespace std;
typedef struct myStruct
{
public:
    void setName(string x)
    {
        name = x;
    }
    void PrintName()
    {
        cout << name << endl;
    }

private:
    string name;
} myStruct;

class myClass
{
public:
    void setName(string x)
    {
        name = x;
    }
    void PrintName()
    {
        cout << name << endl;
    }

private:
    string name;
};

int main()
{
    myStruct myObj;
    myObj.setName("John");
    myObj.PrintName();

    myClass myObj2;
    myObj2.setName("John");
    myObj2.PrintName();

    return 0;
}
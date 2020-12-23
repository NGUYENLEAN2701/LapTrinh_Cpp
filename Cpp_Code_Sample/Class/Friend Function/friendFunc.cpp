
#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        regVar = 0;
    }
    void Set_regVar(int _regVar)
    {
        regVar = _regVar;
    }

private:
    int regVar;

    friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj)
{
    //obj.regVar = 42;
    cout << obj.regVar;
}

int main()
{
    MyClass obj;
    someFunc(obj);
    obj.Set_regVar(99);
    someFunc(obj);
}
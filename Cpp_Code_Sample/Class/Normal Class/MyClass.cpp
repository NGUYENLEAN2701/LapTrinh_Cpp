#include "MyClass.h"
#include <iostream>
using namespace std;
MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

void MyClass::Print_Hello()
{
    cout << "Hello, World!" << endl;
}
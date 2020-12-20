#include <iostream>
using namespace std;
void printNumber(int a)
{
    cout << a;
}
void printNumber(float a)
{
    cout << a;
}

int main()
{
    int a = 123;
    float b = 3.14;
    printNumber(a);
    cout << endl;
    printNumber(b);
}
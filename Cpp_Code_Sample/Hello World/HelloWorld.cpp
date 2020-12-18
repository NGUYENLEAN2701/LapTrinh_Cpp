#include "hello.h"

using namespace std;

int main(void)
{
    cout << "Hello,\nworld!" << endl;
    cout << "This "
         << "is "
         << "awesome!" << endl;
    Hello();
    int a = 3;
    int b = 2;
    b = a++;
    cout << ++b;
    return 0;
}
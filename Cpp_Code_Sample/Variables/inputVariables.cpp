#include <iostream>
using namespace std;

int main()
{
    int myVariable = 10;
    cout << myVariable << "\n";

    int a, b;
    cin >> a >> b;
    int sum = a + b;
    cout << sum << endl;

    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "x*y=" << x * y << endl;

    return 0;
}
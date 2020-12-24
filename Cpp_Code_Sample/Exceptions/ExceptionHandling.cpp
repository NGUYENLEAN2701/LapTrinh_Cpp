#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1;
        cout << "Enter the first number:";
        cin >> num1;

        int num2;
        cout << "Enter the second number:";
        cin >> num2;

        if (num2 == 0)
        {
            throw "error";
        }

        cout << "Result:" << num1 / num2;
    }
    catch (...) //catch everything type data
    {
        cout << "Division by zero!";
    }
}
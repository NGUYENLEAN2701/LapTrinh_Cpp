#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int min, max;
    min = 0;
    max = 99;
    for (int i = 0; i < 100; i++)
    {
        int rand_number = min + (rand() % (max - min + 1));
        cout << rand_number << endl;
    }
    return 0;
}
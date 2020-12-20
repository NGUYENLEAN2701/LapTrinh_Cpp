#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 9, 2, 4, 5};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
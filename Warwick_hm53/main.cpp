#include <iostream>

using std::cout;
using std::endl;

// домашнее задание 5-3

bool PrintArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

bool initArray(int arr[], int size)
{
    int mod = 1;
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = mod;
        mod += 3;
    }
    cout << endl;
    return true;
}
int main()
{
    const int mysize = 8;
    int myArr[] = { };
        
    if (initArray(myArr, mysize))
    {
        cout << "Array was sucesfully modified\n" << endl;
    }
    
    if (PrintArray(myArr, mysize))
    {
        cout << "Array after modification" << endl;
    }
    return 0;
}

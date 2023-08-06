#include <iostream>
using namespace std;
// #define size 5
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (i < size)
        {
            sum = sum + arr[i];
        }
    }
    cout << "The sum is: " << sum << " ";
}
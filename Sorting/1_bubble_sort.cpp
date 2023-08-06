#include <iostream>
using namespace std;
#define size 9
int main()
{
    int tmp = 0;
    int arr[size];
    bool swapped = false; // this is for optimization purpose.
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = true;
            }
        }
    }
    if (swapped == false)
    {
        cout << "The array is already sorted";
    }
    else
    {
        cout << "The sorted array is: ";
        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i];
        }
    }
}
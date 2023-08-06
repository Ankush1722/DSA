#include <iostream>
using namespace std;
int arr_min(int arr[], int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return arr[min];
}
int arr_max(int arr[], int size)
{
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return arr[max];
}

int main()
{
    int arr[10] = {23, 5423, 23, 44, 2, 56, 4, 45, 23, 45};
    cout << "The minimum element is: " << arr_min(arr, 10) << endl;
    cout << "The minimum element is: " << arr_max(arr, 10);
}
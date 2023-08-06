#include <iostream>
using namespace std;
void count_sort(int arr[], int size)
{
    // to get the maximum element in the array
    int k = arr[0];
    for (int i = 0; i < size; i++)
    {
        k = max(k, arr[i]);
    }
    cout << "The maximum element is: " << k << endl;
    // create new array of size maximum element in original array and stores count of each element.
    int count[10] = {0};
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    // modify count array with the addition of last element count.
    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    // create array to store final output
    int output[size];
    for (int i = size - 1; i >= 0; i--)
    {
        // cout << "hi";
        output[--count[arr[i]]] = arr[i];
    }
    // sotres the output array into our original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    print(arr, size);

    count_sort(arr, size);
    cout << "The sorted array is: ";
    print(arr, size);
}
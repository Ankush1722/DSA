#include <iostream>
using namespace std;
int return_unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
void array_input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    array_input(arr, size);
    array_print(arr, size);
    cout << endl;
    cout << return_unique(arr, size) << endl;
}
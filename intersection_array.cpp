#include <iostream>
using namespace std;
void arr_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void arr_input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void intersection(int arr[], int arr1[], int size, int size1)
{
    cout << "The intersection of two arrays is: ";
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << arr[i] << " ";
                arr1[j] = -1;
                break;
            }
        }
    }
}
void another_app(int arr[], int arr1[], int size, int size1)
{
    int i = 0, j = 0;
    cout << "The intersection of two arrays is: ";
    while (i < size && j < size1)
    {
        if (arr[i] == arr1[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if (arr[i] > arr[j])
        {
            j++;
        }
        else if (arr[i] < arr[j])
        {
            i++;
        }
        else if (i > size && j > size1)
        {
            cout << "Intersection is not there.";
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of 1st array: ";
    cin >> size;
    int arr[size];
    arr_input(arr, size);
    int size1;
    cout << "Enter the size of 2nd array: ";
    cin >> size1;
    int arr1[size1];
    arr_input(arr1, size1);
    cout << "The 1st array is: ";
    arr_print(arr, size);
    cout << endl;
    cout << "The 2nd array is: ";
    arr_print(arr1, size1);
    cout << endl;
    another_app(arr, arr1, size, size1);
}

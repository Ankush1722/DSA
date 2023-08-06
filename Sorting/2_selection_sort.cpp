#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                // int tmp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = tmp;
                swap(arr[i],arr[j]);
            }
        }
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
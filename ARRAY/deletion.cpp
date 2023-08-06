#include <iostream>
using namespace std;
void deletion(int arr[], int size, int indx)
{
    for (int i = indx; i < size; i++)
    {
        arr[i] = arr[i + 1];
        arr[size]=NULL;
    }
}
int main()
{
    int indx;
    cout << "Enter the indx: ";
    cin >> indx;
    cout << "INITIAL ARRAY: ";
    int arr[10] = {3, 5, 3, 23, 4, 5, 1, 3, 5};
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
    deletion(arr, 10 /*size*/, indx);
    cout << " " << endl;
    cout << "FINAL ARRAY: ";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
}
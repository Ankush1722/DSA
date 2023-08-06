#include <iostream>
using namespace std;
void insertion(int arr[], int size, int indx, int num)
{
    for (int i = size - 1; i > indx; i--)
    {
        arr[i] = arr[i-1];
    }
        arr[indx] = num;
}
int main()
{
    int num;
    cout << "Enter the number you want to enter: ";
    cin >> num;
    int indx;
    cout << "Enter the index at where you want to enter the number: ";
    cin >> indx;
    int arr[10] = {1, 2, 3, 4, 5, 7, 8, 9};
    cout<<"INITIAL ARRAY: ";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
    insertion(arr, 10 /*size*/, indx, num);
    cout << " " << endl;
    cout<<"FINAL ARRAY: ";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[15], num, indx, size;
//     cout << "Enter size of array: ";
//     cin >> size;
//     cout << "Enter the numbers in array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The array is: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i];
//     }
// }

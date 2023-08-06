#include <iostream>
using namespace std;
#define max 10
int main()
{
    int arr[max], k = 0;
    cout << "Enter the elements: ";
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    cout << "Upper triangular: ";
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i <= j)
            {
                cout << arr[k];
                k++;
            }
            else
                cout << "0";
        }
        cout << endl;
    }
    k = 0;
    cout << "Lower triangular:";
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << arr[k];
                k++;
            }
            else
                cout << "0";
        }
        cout << endl;
    }
}
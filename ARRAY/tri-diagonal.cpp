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
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i - j == 0 || i - j == 1 || i - j == -1)
            {
                cout << arr[k];
                k++;
            }
            else
                cout << "0";
        }
        cout << " " << endl;
    }
}
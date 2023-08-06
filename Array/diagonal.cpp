#include <iostream>
using namespace std;
#define MAX 4
int main()
{
    int arr[MAX];
    cout << "Enter the elements: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (i == j)
            {
                cout << arr[i];
            }
            else
                cout << "0";
        }
        cout << " " << endl;
    }
}

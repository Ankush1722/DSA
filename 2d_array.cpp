#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The 2d array is: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    int x;
    cout << "Enter the element you want to find: ";
    cin >> x;
    bool element = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "The element is at: ";
                cout << i << " ROW"
                     << " "
                     << "and " << j << " COLUMN" << endl;
                element = false;
            }
        }
    }
    if (element == true)
    {
        cout << "Element is not found";
    }
}
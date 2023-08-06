#include <iostream>
using namespace std;
int main()
{
    // int arr[2][3] = {{1,2,3},{4,5,6}}; initialization of 2d array.
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
    cout << "The matrix is ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    cout << "The spiral order traversal is ";
    cout << endl;
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // for row start
        for (int i = col_start; i <= col_end; i++)
        {
            cout << " " << arr[row_start][i];
        }
        row_start++;

        // for column end
        for (int i = row_start; i <= row_end; i++)
        {
            cout << " " << arr[i][col_end];
        }
        col_end--;

        // for row end
        for (int i = col_end; i >= col_start; i--)
        {
            cout << " " << arr[row_end][i];
        }
        row_end--;

        // for column start
        for (int i = row_end; i >= row_start; i--)
        {
            cout << " " << arr[i][col_start];
        }
        col_start++;
    }
}
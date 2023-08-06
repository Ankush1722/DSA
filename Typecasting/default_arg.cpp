#include <iostream>
using namespace std;
// defalut value declaration is starting form the rightmost elemnet.
// like 1,2,3,4 elements we first give default value to element 4 ans than so on.
// but firstly we cannot give the defaul tvalue to the any of 1,2,3.

int sum(int a[], int size, int si = 0)
{
    int ans = 0;
    for (int i = si; i < size; i++)
    {
        ans += a[i];
    }
    return ans;
}

int main()
{
    int a[5];
    cout << "Enter the numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sum(a, 5) << endl;
}
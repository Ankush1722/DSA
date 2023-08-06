#include <iostream>
using namespace std;

bool find_int(int n[], int size, int x)
{
    if (size == 0)
    {
        return false;
    }
    if (x == n[0])
    {
        return true;
    }
    bool find = find_int(n + 1, size - 1, x); 
    return find;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> p[i];
    }
    int x;
    cout << "Enter the number you want to find: ";
    cin >> x;

    cout << find_int(p, n, x) << endl;
    delete p;
}
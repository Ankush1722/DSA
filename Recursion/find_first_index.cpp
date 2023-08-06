#include <iostream>
using namespace std;

int find_first_index(int n[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if (x == n[0])
    {
        return 0;
    }
    int find = find_first_index(n + 1, size - 1, x);
    if (find == -1)
    {
        return -1;
    }
    else
    {
        return find + 1;
    }
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
    cout << "The first index of the number you entered 'p[i]' is: "<<find_first_index(p, n, x) << endl;
    delete p;
}
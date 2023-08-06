#include <iostream>
using namespace std;

int find_all_index(int n[], int size, int x, int total_sz, int output[], int i)
{
    if (size == 0)
    {
        return i;
    }
    if (x == n[0])
    {
        output[i] = total_sz - size;
        i++;
    }
    int count = find_all_index(n + 1, size - 1, x, total_sz, output, i);
    return count;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " number: ";
        cin >> p[i];
    }
    int x;
    cout << "Enter the number you want to find: ";
    cin >> x;
    int output[10];
    int count = find_all_index(p, n, x, n /*(as a total size)*/, output, 0);
    for (int i = 0; i < count; i++)
    {
        cout << "The indices are: " << output[i] << " ";
    }
    cout << endl;

    // cout << "The indexes are: " << find_all_index(p, n, x) << endl;
    delete p;
}
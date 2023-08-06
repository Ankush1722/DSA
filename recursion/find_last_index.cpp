#include <iostream>
using namespace std;

//array is traversed from left to right.

int find_last_index(int n[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    int find = find_last_index(n + 1, size - 1, x);
    if (find == -1)
    {
        if (x == n[0])
        {
            return 0;
        }
        else
            return find;
    }
    else
    {
        return (find + 1);
    }
}

// array is traversed from right to left
/*int find_last_index(int n[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if(x=n[0])
    {
        return (size-1);
    }
    int find = find_last_index(n -1, size - 1, x);
    return find;
}*/
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the "<<i<<" number: ";
        cin >> p[i]; 
    }
    int x; 
    cout << "Enter the number you want to find: ";
    cin >> x;
    cout << "The last index of the number you entered 'p[i]' is: " << find_last_index(p, n, x) << endl;
    delete p;
}


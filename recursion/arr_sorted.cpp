#include <iostream>
using namespace std;

bool is_sorted(int n[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (n[0] > n[1])
    {
        return false;
    }
    bool is_small_sorted = is_sorted(n + 1, size - 1);
    return is_small_sorted;
}

int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number in array: ";
        cin >> n[i];
    }
    // int n[10] = {1, 2, 3, 4, 100, 6, 7, 8, 9, 10};

    cout << is_sorted(n, 5) << endl;
}
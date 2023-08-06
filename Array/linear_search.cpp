#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int x)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the number you want to find: ";
    cin >> x;
    int arr[10] = {243, 3, 53, 6, 32, 5, 34, 2, 34, 7};
    int ans = linear_search(arr, 10, x);
    if (arr[ans] == x)
    {
        cout << "The element is found\tThe index of the element is: " << ans;
    }
    else
    {
        cout << "The element is not found" << endl;
    }
}
#include <iostream>
using namespace std;

int arr_sum(int n[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int new_sum = arr_sum(n, size - 1) + n[size - 1];
    return new_sum;
}
int main()
{
    int n;
    cout<<"Enter the length of an array: ";
    cin>>n;
    int *p=new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array element: ";
        cin>>p[i];
    }
    // int size=sizeof(p)/sizeof(p[0]);
    
    cout << arr_sum(p, n) << endl;
    delete p;
}
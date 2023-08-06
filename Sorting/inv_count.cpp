#include <iostream>
using namespace std;
long long merge(int arr[], int s_indx, int mid, int e_indx)
{
    long long inv = 0;
    int len1 = mid - s_indx + 1;
    int len2 = e_indx - mid;
    int arr1[len1];
    int arr2[len2];
    int k = s_indx;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k];
        k++;
    }

    int indx1 = 0, indx2 = 0;
    k = s_indx;
    while (indx1 < len1 && indx2 < len2)
    {
        if (arr1[indx1] <= arr2[indx2])
        {
            arr[k] = arr1[indx1];
            k++, indx1++;
        }
        else
        {
            arr[k] = arr2[indx2];
            inv += len1 - indx1;
            k++, indx2++;
        }
    }
    while (indx1 < len1)
    {
        arr[k] = arr1[indx1];
        k++, indx1++;
    }
    while (indx2 < len2)
    {
        arr[k] = arr2[indx2];
        k++, indx2++;
    }
    return inv;
}

long long merge_sort(int arr[], int s_indx, int e_indx)
{
    long long inv = 0;
    if (s_indx < e_indx)
    {
        int mid = (s_indx + e_indx) / 2;
        inv += merge_sort(arr, s_indx, mid);
        inv += merge_sort(arr, mid + 1, e_indx);
        inv += merge(arr, s_indx, mid, e_indx);
    }
    return inv;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    print(arr, size);

    long long a = merge_sort(arr, 0, size - 1);
    cout << "The inversions is: " << a << endl;
}
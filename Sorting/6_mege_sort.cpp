#include <iostream>
using namespace std;
void merge(int arr[], int s_indx, int mid, int e_indx)
{
    // calculate length of two arrays
    int len1 = mid - s_indx + 1;
    int len2 = e_indx - mid;
    // creating two arrays
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    // copy values
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
    // merging two arrays
    int indx1 = 0; // for left array
    int indx2 = 0; // for right array
    k = s_indx;
    while (indx1 < len1 && indx2 < len2)
    {
        if (arr1[indx1] < arr2[indx2])
        {
            arr[k] = arr1[indx1];
            k++, indx1++;
        }
        else
        {
            arr[k] = arr2[indx2];
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
    delete[] arr1;
    delete[] arr2;
}

void merge_sort(int arr[], int s_indx, int e_indx)
{
    if (s_indx >= e_indx)
    {
        return;
    }
    int mid = (s_indx + e_indx) / 2;
    // left part
    merge_sort(arr, s_indx, mid);
    // right part
    merge_sort(arr, mid + 1, e_indx);
    // combine two sorted arrays
    merge(arr, s_indx, mid, e_indx);
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

    merge_sort(arr, 0, size - 1);
    cout << "The sorted array is: ";
    print(arr, size);
}
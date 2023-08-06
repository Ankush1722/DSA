#include <iostream>
using namespace std;
int partition(int arr[], int s_indx, int e_indx)
{
    int pivot = arr[s_indx];
    int count = 0;
    for (int i = s_indx + 1; i <= e_indx; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position
    int pivot_indx = s_indx + count;
    swap(arr[pivot_indx], arr[s_indx]);

    int i = s_indx, j = e_indx;
    while (i < pivot_indx && j > pivot_indx)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivot_indx && j > pivot_indx)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_indx;
}
void quick_sort(int arr[], int s_indx, int e_indx)
{
    if (s_indx >= e_indx)
        return;
    // for partion of an array.
    int p = partition(arr, s_indx, e_indx);

    // for left part sorting
    quick_sort(arr, s_indx, p - 1);

    // for right part sorting
    quick_sort(arr, p + 1, e_indx);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    print(arr, size);

    quick_sort(arr, 0, size - 1);
    cout << "\nThe sorted array is: ";
    print(arr, size);
}
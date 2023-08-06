#include <iostream>
using namespace std;
int shell_sort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return 0;
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
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    print(arr, size);

    shell_sort(arr, size);

    cout << "\nThe sorted array is: ";
    print(arr, size);
}

// #include <iostream>
// using namespace std;
// int partition(int arr[], int s_indx, int e_indx)
// {
//     int pivot = arr[s_indx];
//     int i = s_indx, j = e_indx;
//     while (i < j)
//     {
//         while (arr[i] <= pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[j], pivot);
//     return j;
// }

// void quick_sort(int arr[], int s_indx, int e_indx)
// {
//     if (s_indx < e_indx)
//     {
//         int j = partition(arr, s_indx, e_indx);
//         quick_sort(arr, s_indx, j);
//         quick_sort(arr, j + 1, e_indx);
//     }
// }

// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The array is: ";
//     print(arr, size);

//     quick_sort(arr, 0, size - 1);
//     cout << "\nThe sorted array is: ";
//     print(arr, size);
// }
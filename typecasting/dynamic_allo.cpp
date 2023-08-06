#include <iostream>
using namespace std;
// with the help of the "new" we can initializes the array from the user input.
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int *p = new int[n]; // this will stores the (int *p) in stack and (new int[n]) in the heap.
    // Dynamically alocated space is not vanished on basics of scope of variables. But statistically allocated memory does.
    // to delete the dynamically allocated memory we use the "delete 'variable'"
    // delete p;  for single element deletion
    // delete [] p; for array deletion   
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the numbers in array: ";
        cin >> p[i];
        if (max < p[i])
        {
            max = p[i];
        }
    }
    cout << "The max is: " << max << endl;
    delete p;
}


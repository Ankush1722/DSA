#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {2, 1, 4, 6};
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i = j)
            {
                cout << arr[i];
            }
            else
                cout << "0";
        }
    }
}


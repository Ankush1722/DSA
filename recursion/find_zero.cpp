#include <iostream>
using namespace std;
int find_zeros(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int LD = n % 10; // means remainder
    int SN = n / 10; // means quotient
    int ans = find_zeros(SN);
    if (LD == 0)
    {
        return ans + 1;
    }
    else if (SN == 0)
    {
        return 0;
    }
    else
    {
        return ans;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The no. of zeros is: " << find_zeros(n) << endl;
}
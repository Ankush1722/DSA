#include <iostream>
using namespace std;

int count_digit(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    int p = 1 + count_digit(n / 10);
    return p;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The digits are: " << count_digit(n) << endl;
}
#include <iostream>
using namespace std;

int factorial(int a)
{
    cout << a << endl;
    if (a == 0)
    {
        return 1;
    }
    int k = factorial(a - 1);
    return a * k;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int output = factorial(n);
    cout << "Output is: " << output << endl;
}
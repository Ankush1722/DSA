#include <iostream>
using namespace std;
// with the help of 'inline' we can retrain the same performance and code is readable.
// basically the 'inline' copies the return statement at where that function is called.
// it's done by the compiler and it only copies the 1 line code.
// the code bigger than that then its the choice of compiler to copy or not.
inline int max(int a, int b)
{
    return (a > b) ? a : b; // tertiary operator.
}
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int c = max(a, b);
    cout << "Maximum is " << c << endl;
}
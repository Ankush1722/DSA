#include <iostream>
using namespace std;

int x_n(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int answer = x * x_n(x, n - 1);
    return answer;
}
int main()
{
    int x, n;
    cout << "Enter the value of x and n: ";
    cin >> x >> n;

    int output = x_n(x, n);
    cout << output << endl;
}
#include <iostream>
using namespace std;

float geo_sum(int i, int k)
{
    if (i > k)
    {
        return 0;
    }
    float power = 1;
    for (int t = 1; t <= i; t++)
    {
        power = power * (0.5);
    }
    float ans = power + geo_sum(++i, k);
    return ans;
}
int main()
{
    int k;
    cout << "Enter the integer: ";
    cin >> k;
    int i = 0;
    cout << "The sum is: " << geo_sum(i, k) << endl;
}


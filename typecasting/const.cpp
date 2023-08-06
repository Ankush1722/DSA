#include <iostream>
using namespace std;

int main()
{
    // cosnt int
    const int i = 20; // int const i=20;

    // constant reference from a non const int
    int j = 10;
    int const &k = j;
    j++;
    // k++; not possible because the path to j is constant.
    cout << j << endl;

    // constant reference from a const int
    int const j1 = 20;
    int const &k1 = j1;
    // j1++;  not possible
    // k1++;  not possible
    cout << j1 << endl
         << k1 << endl;

    // constant reference from a const int
    // int const p=10;   not possible because 'p' has only 'read'. so how you should give the 'read and write' to &h.
    // int &h=p;
    // h++;
    // cout<<h<<endl;
}
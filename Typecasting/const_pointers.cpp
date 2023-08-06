#include <iostream>
using namespace std;

int main()
{
    int const i = 10;
    // int *p = &i;  // // you cannot store an address of an constant integer into a normal pointer.
    int const *p = &i;
    // (*p)++; // this is not right.
    cout << *p << endl;

    int io = 10;
    int const *j = &io;

    cout << *j << endl;
    io++;
    cout << *j << endl;
}
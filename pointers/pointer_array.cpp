#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;
    a[0] = 10;
    a[1] = 20;
    cout << *a << endl;
    cout << a[1] << endl;
    cout << *(a + 1) << endl;
    cout << 1 [a] << endl;

    int *p = &a[0];
    cout << a << endl;
    cout << p << endl;

    cout << &a << endl;
    cout << &p << endl;  // this is going to be where the pointer is stored.

    // a = a+1 this is not true because we cannot reassign the array

    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 7;
//     int *c = &a;
//     c = c + 1;
//     cout << a << " " << *c << endl;
//      output will be 7 'garbage value'
// }
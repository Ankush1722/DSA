#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    char c[] = "abc";
    cout << a << endl; // it prints the address.
    cout << c << endl; // it prints the whole characters.

    char *k = &c[0];
    cout << k << endl;

    cout << " " << endl;
    char c1 = 'a';
    char *pj = &c1;

    cout << c1 << endl;
    cout << pj << endl;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch = 'a';
//     char *ptr = &ch;
//     ch++;
//     cout << *ptr << endl;
// }



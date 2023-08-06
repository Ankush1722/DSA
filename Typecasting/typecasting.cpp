// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 65;
//     char c = i;
//     cout << c << endl; // this is type casting (implicit).

//     int *p = &i;
//     char *pc = (char *)p; // this is type casting (explicit).

//     cout << p << endl;
//     cout << pc << endl; // it goes there and print until it finds the null character.

//     cout << *p << endl;
//     cout << *pc << endl;
//     cout << *(pc + 1) << endl;
//     cout << *(pc + 2) << endl;
//     cout << *(pc + 3) << endl;
// }

#include <iostream>
using namespace std;

void updateValue(int *p)
{
    *p = 610 % 255;
    cout << *p << endl;
}

int main()
{
    char ch = 'A';
    updateValue((int *)&ch);
    cout << ch << endl;
}

// int main()
// {
//     int *p;
//     *p=10;
//     cout<<*p<<endl;
// }

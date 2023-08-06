#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p = &i;
    cout << p << endl;

    p = p + 1;
    cout << p << endl;

    p = p - 2;
    cout << p << endl;

    cout << " " << endl;
    
    double d = 102.3;
    double *db = &d;
    cout << db << endl;
    db++;
    cout << db << endl;
}
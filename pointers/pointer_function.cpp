#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void incr_pointer(int  *p)
{
    p=p+1;
}

void incr(int *p)
{
    (*p)++; // going to this address and changer the value;
}
int main()
{
    int i = 10;
    int *p = &i; 

    print(p);
    
    cout<<p<<endl;
    incr_pointer(p);
    cout<<p<<endl;

    cout<<*p<<endl;
    incr(p);
    cout<<*p<<endl;
    
}
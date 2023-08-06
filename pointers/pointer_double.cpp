#include<iostream>
using namespace std;

void incr1(int **z){
    z=z+1;
}

void incr2(int **z){
    *z=*z+1;
}

void incr3(int **z){
    **z=**z+1;
}
int main()
{   
    int i=10;
    int *p = &i;
    cout<<&p<<endl; // it shows the address of 'p' pointer variable.

    int **z=&p; // it is the pointer which contains the address of the other pointer.
    cout<<z<<endl;
        
    cout<<p<<endl; // it shows the address of 'i' variable.
    cout<<*z<<endl; // it shows the address of 'i' variable. "it is dereference"
    cout<<&i<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**z<<endl;

    void incr1();
    void incr2();
    void incr3();

}
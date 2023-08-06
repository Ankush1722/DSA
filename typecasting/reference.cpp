#include <iostream>
using namespace std;

// int & i;  this is a refrence variable declaration.
void increment(int i)
{
    i++;
}
void increment2(int &i) // pass by reference
{
    i++;
}

// refrence to stack memory and address of stack memory with local variables is a bad practice. 

int main()
{
    int i = 10;
    int j = 10;
    increment(i);
    increment2(j);
    cout << i << endl;
    cout << j << endl;

    int l=100;
    int &k = l;  //&k pointed to same memory as "l"
    k++;
    cout << l << endl;

    





}
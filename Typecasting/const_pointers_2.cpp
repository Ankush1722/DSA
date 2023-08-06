#include <iostream>
using namespace std;
int main()
{
    int i=10;
    int j=20;
    int const *p = &i; // 'p' is a pointer to a constant int. it says that whereever i point i cannot change that. it cannot says that i cannot be changed
    //it is saying i am pointing towards the constant.
    p=&j;
    // (*p)++; // not possible
    cout<<*p<<endl;

    int * const p2=&i; //'p2' is a constant pointer to an integer.
    (*p2)++;
    // p2=&j; // not possible (because p2 is a constant pointer)
    cout<<*p2<<endl;
    
    int const * const p3=&i; // 'p3' is a constant pointer to a constant integer
    // (*p3)++; // not possible
    // p3=&j; // not possible
    

}

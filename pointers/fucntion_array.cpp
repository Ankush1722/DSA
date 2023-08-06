// // Array which is declared in the main function is working as the pointer in the other function

// #include <iostream>
// using namespace std;

// // int add(int a[], int size)
// // {
// //     cout << sizeof(a) << endl; // as a pointer
// //     return 0;
// // }

// int add(int *a,int size)
// {
//     int ans=0;
//     for ( int i = 0; i < size; i++)
//     {
//         ans = ans+a[i];
//     }
//     return ans;
// }
// int main()
// {
//     int a[10];
//     cout << sizeof(a) << endl; // as a array
//     cout << add(a, 10) << endl;
//     cout << add(a+3, 10) << endl; // part of array is also passed to the function
    
// }

// #include<iostream>
// using namespace std;
// void fun(int a[]) {
//     cout << a[0] <<endl;
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout<<"tois"<<endl;
//     cout << a[0]<<endl;
// }

#include<iostream>
using namespace std;

void square(int *p){
 //int a = 10;
 //p = &a; // this creates a copy of this.
 //cout<<*p<<endl;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}
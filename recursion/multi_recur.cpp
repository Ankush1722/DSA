#include<iostream>
using namespace std;
int multiply(int m, int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans=multiply(m,n-1);
    return ans+m;
}

int main()
{
    int m,n;
    cout<<"Enter the number 'm': ";
    cin>>m; 
    cout<<"Enter the number 'n': ";
    cin>>n;
    cout<<"The ans is: "<<multiply(m,n)<<endl;
}
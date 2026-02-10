//  make a finction which calculate the factorial of n using recursion

#include<iostream>
using namespace std;
int fact(int x)
{
if (x==0 || x==1) return 1;
return x * fact(x-1);
}
int main()
{
    int n;
    cout<<"Enter a name : ";
    cin>>n;
    cout<<fact(n);
}

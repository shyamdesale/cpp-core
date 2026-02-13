// make a function which calculates 'a' raised to the power 'b' using recursion :

#include<iostream>
using namespace std;

int power(int x , int y)
{
    if (y==0) return 1;
    return x * power (x , y-1);
}
int main()
{
    int a;
    cout<<"Enter 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<power(a , b);
    return 0;
}
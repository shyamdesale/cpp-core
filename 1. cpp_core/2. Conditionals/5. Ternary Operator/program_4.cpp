// Example : Take integer input & print the absolute value of that integer.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    (n >= 0) ? cout<<"The absolute value is : "<<n : cout<<"The absolute value is : "<<-n;
}
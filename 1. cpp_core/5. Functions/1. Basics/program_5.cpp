// Sum of two numbers

#include<iostream>
using namespace std;

void sum (int a , int b)    // int a & int b = formal parameters
{
    cout<<"The sum of two numbers : "<<a + b;
}

int main ()
{
    int a;
    cout<<"Enter a 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter a 1st Number : ";
    cin>>b;

    sum (a , b);
}
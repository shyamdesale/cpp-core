// Example : Take positive intefer input & tell if it is even or odd

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if (n % 2 == 0)
    {
        cout<<"The given number is Even Number : ";
    }
    else
    {
        cout<<"The given number is Odd Number : ";
    }
    return 0;
}
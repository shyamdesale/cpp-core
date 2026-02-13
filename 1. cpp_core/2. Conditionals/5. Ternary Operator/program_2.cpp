// Example : Take positive intefer input & tell if it is even or odd

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    (n % 2 == 0) ? cout<<"The given number is Even Number : " : cout<<"The given number is Odd Number : "; // Ternary Operator
    return 0;
}
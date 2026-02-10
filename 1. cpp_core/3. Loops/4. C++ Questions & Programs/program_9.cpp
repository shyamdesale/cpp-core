// write a program to find factorial of a given number

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout<<"Factorial of a given number is  : "<<factorial;
}

// ek int deta type approx 2,147,483,647 itne number store kr sakta hai
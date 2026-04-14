#include<iostream>
using namespace std;

void fact(int x)
{
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        cout<<i<<" : Factorial is : ";
        factorial *= i;
        cout<<factorial<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    fact(n);
    return 0;
}
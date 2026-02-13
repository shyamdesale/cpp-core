#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout<<"This is a composte number";
            break;
        }
        else
        {
            cout<<"This is a prime number";
        }
    }
    return 0;
}
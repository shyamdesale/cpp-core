/* Take a positive integer input and tell if it is a three digit number or not. */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if (n >= 0 && n % 2 == 0)
    {
        cout<<n<<" : is positive & even number";
    }
    else if (n >= 0 && n % 2 != 0)
    {
        cout<<n<<" : is positive & odd number";
    }
    else
    {
        cout<<n<<" : is not a positive number";
    }
    return 0;
}
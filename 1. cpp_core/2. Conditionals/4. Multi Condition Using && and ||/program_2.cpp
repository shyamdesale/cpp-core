/* Take a positive integer input and tell if it is a three digit number or not. */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if (n > 99 && n < 1000)
    {
        cout<<n<<" : is 3 digit number";
    }
    else
    {
        cout<<n<<" : is not a 3 digit number";
    }
}
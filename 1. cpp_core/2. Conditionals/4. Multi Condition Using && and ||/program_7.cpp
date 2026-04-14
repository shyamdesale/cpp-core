/* Take 3 numbers input and print the gretest of them */

#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter a 1st Number : ";
    cin>>a;
    float b;
    cout<<"Enter a 2st Number : ";
    cin>>b;
    float c;
    cout<<"Enter a 3st Number : ";
    cin>>c;
    if ( a > b && a > c)
    {
        cout<<a<<" : is greter than 2nd and 3rd number";
    }
    else if ( b > a && b > c)
    {
        cout<<b<<" : is greter than 1nd and 3rd number";
    }
    else
    {
        cout<<c<<" : is greter than 1nd and 2rd number";
    }
    return 0;
}
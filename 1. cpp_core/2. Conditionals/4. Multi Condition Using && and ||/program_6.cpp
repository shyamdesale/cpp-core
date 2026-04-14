/* Take 3 numbers input and tell if they can be the sides of a traingle */

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
    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        cout<<"All three sides can form a traingle";
    }
    else
    {
        cout<<"All three sides are not form a traingle";
    }
    return 0;
}
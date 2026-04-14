#include<iostream>
using namespace std;
int main()
{
    float p;
    cout<<"Enter a Principle :";
    cin>>p;
    float r;
    cout<<"Enter a Rate :";
    cin>>r;
    float t;
    cout<<"Enter a Time :";
    cin>>t;
    float si = (p * r * t)/100;
    cout<<"Simple Intrest is : "<<si;
    // simple intrest formula : (principle * rate * time) / 100
    return 0;
}
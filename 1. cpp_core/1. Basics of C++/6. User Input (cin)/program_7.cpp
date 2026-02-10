#include<iostream>
using namespace std;
int main()
{
    float km = 1.6;
    cout<<"Enter a KiloMeter : ";
    cin>>km;
    float m = km * 1000;
    float cm = m * 100;
    cout<<"Kilometer to Meter is : "<<m<<endl;
    cout<<"Kilometer to Centimeter is : "<<cm;
}
#include<iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter a Radius :";
    cin>>r;
    float v = (4.0/3.0) * 3.1415 * (r * r * r);
    cout<<"Volume of Sphere is : "<<v;
}
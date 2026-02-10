#include<iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter a Radius : ";
    cin>>r;
    float h;
    cout<<"Enter a Height : ";
    cin>>h;
    float volume = 3.1415 * r * r * h;
    cout<<"Volume of Cylinder is : "<<volume;
}
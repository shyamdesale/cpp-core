#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter a 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter a 2st Number : ";
    cin>>b;

    cout<<"Maximum of these Two number is : "<< max ( a , b ) <<endl;   // max is library function

    cout<<"Minimum of these Two number is : "<< min ( a , b ) <<endl;   // min is library function

    cout<<"Power is : "<< pow ( a , b ) <<endl;   // pow is library function
    return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter a Age : ";
    cin>>age;
    if (age >= 60 )
    {
        cout<<"Elderly";
    }
    else if (age <= 59)
    {
        cout<<"Adult";
    }
    else if (age <= 19)
    {
        cout<<"Teen";
    }
    else if (age <= 12)
    {
        cout<<"Child";
    }
    else
    {
        cout<<"Infant";
    }
    return 0;
}
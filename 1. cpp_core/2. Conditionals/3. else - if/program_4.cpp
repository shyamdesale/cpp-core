#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter a Age : ";
    cin>>age;
    if (age <= 12)
    {
        cout<<"50% Discoutnt";
    }
    else if (age <= 60)
    {
        cout<<"No Discoutn";
    }
    else
    {
        cout<<"30% Discoutn";
    }
    return 0;
}
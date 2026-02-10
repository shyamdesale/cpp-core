#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    (n % 5 == 0) ? cout<<"The given number is divisible by 5 : " : cout<<"The given number is not divisible by 5 : ";
}
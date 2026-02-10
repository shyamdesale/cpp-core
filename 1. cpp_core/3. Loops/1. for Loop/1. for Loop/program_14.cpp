// Example : Print the number 100 to 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        cout<<i<<" ";
    }
}
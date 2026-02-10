// Example : Print the number 1 to 100

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        cout<<i<<" ";
        i++;
    }
}
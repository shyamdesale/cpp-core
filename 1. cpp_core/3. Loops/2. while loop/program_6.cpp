// Print the table of 'n'.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int i = n;
    while (i <= n * 10)
    {
        cout<<i<<" ";
        i = i + n;
    }
    return 0;
}
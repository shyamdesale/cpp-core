// Example : Print the number 1 to 100

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 3) continue;  // skip the number 3
        if (i == 8) continue;  // skip the number 8
        cout<<i<<" ";
    }
}
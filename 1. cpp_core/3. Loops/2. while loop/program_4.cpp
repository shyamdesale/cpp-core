// Example : Print the number 1 to 100 (even number)

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
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
            i++;
    }
}
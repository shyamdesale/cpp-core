// Print the table of 19

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for (int i = 1; i <= 190; i++)
    {
        if (i % 19 == 0)
        {
            cout<<i<<" ";
        }
        
    }
}
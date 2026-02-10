// Display the given user input number factors ;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number / Kiska factor nikalna hai : ";
    cin>>n;
    cout<<"The given factors are : ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout<<i<<" ";
        }   
    }
}
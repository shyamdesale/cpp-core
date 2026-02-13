// Display the given user input number factors find the higest factor ;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number / Kiska factor nikalna hai : ";
    cin>>n;
    cout<<"The highest 1st factors are : ";
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout<<i<<" ";
            break;
        }   
    }
    return 0;
}
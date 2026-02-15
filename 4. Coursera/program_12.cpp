#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number of Element Store in Array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter a Array Elements : ";
    for (int i = 0; i <= (n-1); i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The Given Array is : ";
    for (int i = 0; i <= (n-1); i++)
    {
        cout<<arr[i] <<" ";
    }
}
// // write  a program to copy the contents of one array into another in the reverse order

#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {1 , 2 ,3 , 4 , 5};
    int brr[5];
    for (int i = 0; i <= 4; i++)
    {
        int j = 5 - 1 - i;
        brr[i] = arr[j];
        cout<<brr[i]<<"  ";
    }
}

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        brr[i] = arr[j];
        cout<<brr[i]<<"  ";
    }   
}

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - i - 1];
        cout<<brr[i]<<"  ";
    }   
}
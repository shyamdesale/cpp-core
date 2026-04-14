// find the second minimun number

#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 4, 6, 34 , 6 ,23};
    int n = sizeof(arr)/4;
    int mx = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        mx = min(mx , arr[i]);
    }
    int smx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != mx) smx = min(smx , arr[i]);
    }
    cout<<smx;
}
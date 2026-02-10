#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 4, 6, 34 , 6 ,23};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn) mn = arr[i];
    }
    cout<<mn;   
}


#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 4, 6, 34 , 6 ,23};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        mn = min(mn , arr[i]);
    }
    cout<<mn;   
}
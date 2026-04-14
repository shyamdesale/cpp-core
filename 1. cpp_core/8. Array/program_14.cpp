// calculate the product of all the elements in the given array

#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 4, 6, 34 , 6 ,23};
    int n = sizeof(arr)/4;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout<<product;   
}
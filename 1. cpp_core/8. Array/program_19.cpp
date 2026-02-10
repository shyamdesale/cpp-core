// print yese number jo 5 se greter hoge

#include<iostream>
using namespace std;
int main ()
{
    int x = 5;
    int arr[] = {2 ,4 , 1 ,11 , 5 , 7 , 34};
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= n; i++)
    {
        if(x < arr[i]) cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {2 ,4 , 1 ,11 , 5 , 7 , 34};
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout<<(arr[i] * 2)<<"  ";
        }
        else
        {
            cout<<(arr[i] + 10)<<"  ";
        }
    }
}
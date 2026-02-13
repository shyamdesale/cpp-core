#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 4, 6, 34 , 6 ,23};
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += arr[i];
    }
    cout<<sum;   

    return 0;
}
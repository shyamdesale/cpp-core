#include<iostream>
using namespace std;
int main ()
{
    int arr[5];
    std :: cout << "Enter Array Element : ";
    for (int i = 0; i <= 4; i++)
    {
        std :: cin >> arr[i];
    }
    std :: cout << "The Giver Array is : ";
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
}
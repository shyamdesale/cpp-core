// write a program to store 10 at every index of a 2d matrix with 5 row and 5 column

#include<iostream>
using namespace std;
int main ()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
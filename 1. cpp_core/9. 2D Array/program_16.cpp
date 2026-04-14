// write a program to print the transpose of the matrix entered by the user.

#include<iostream>
using namespace std;
int main ()
{
    int r;
    cout<<"Enter a number of row's : ";
    cin>>r;
    int c;
    cout<<"Enter a number of column's : ";
    cin>>c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
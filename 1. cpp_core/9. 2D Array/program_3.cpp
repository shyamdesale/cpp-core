// row wise printing

#include<iostream>
using namespace std;
int main ()
{
    int r;
    cout<<"Enter a Number of Row : ";
    cin>>r;
    int c;
    cout<<"Enter a Number of Column : ";
    cin>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }   
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
// write a program to add two matrix :

#include<iostream>
using namespace std;
int main ()
{
    int r;
    cout<<"Enter a Number of Row's : ";
    cin>>r;
    int c;
    cout<<"Enter a Number of Column's : ";
    cin>>c;

    int arr[r][c] , brr[r][c] , sum[r][c];

    // Input Matrix A :
    cout << "Enter Elements of Matrix A :\n";
    for (int i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }

    // Input Matrix B :
    cout << "Enter Elements of Matrix B :\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>brr[i][j];
        }
    }

    // Add Matrix A + B :
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }

    // Sum of Matrix A + B = Sum :
    cout<<"Sum of Matrix A + B = Sum :\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }
}
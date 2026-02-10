// find the product of all elements in a given matrix :


#include<iostream>
using namespace std;

int main ()
{
    int r;
    cout<<"Enter a Number of Row's : ";
    cin>>r;  // taking number of rows
    
    int c;
    cout<<"Enter a Number of Column's : ";
    cin>>c;  // taking number of columns
    
    int product = 1;  // variable to store final product
    
    int arr[r][c];    // creating matrix (VLA, works only on some compilers)

    // taking matrix input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }

    // calculating product of all elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            product *= arr[i][j];  
        }
    }

    // final output
    cout<<"Product of All Element's in Given Matrix : "<<product;
}
// find the minimum element in a given matrix :

#include<iostream>
using namespace std;
int main ()
{
    int arr[4][2] = {{76 , 81} , {13 , 76} , {82 , 91} , {15 , 76}};
    int minimum = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            minimum = min(minimum , arr[i][j]);
        }
    }
    cout<<minimum;
}
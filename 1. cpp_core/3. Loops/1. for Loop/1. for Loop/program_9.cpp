// Display the A.P- 4, 7, 10,...n terms

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int n1;
    cout<<"Difference in A.P : ";
    cin>>n1;

    for (int i = 4; i <= (3 * n) + 1; i = i += n1)
    {
        cout<<i<<" ";
    }
}
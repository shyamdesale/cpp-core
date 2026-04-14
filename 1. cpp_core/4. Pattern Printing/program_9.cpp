/* print the pattern (Number Square)
    a a a a
    b b b b
    c c c c
    d d d d
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<(char)(i + 96)<<" ";
        }
        cout<<endl;
    }
}
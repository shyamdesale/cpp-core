/*    print the given pattern (Star Traingle)

    1
    a b
    3 3 3
    a b c d
    1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<(char)(j + 96)<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
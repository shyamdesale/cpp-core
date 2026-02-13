/* print the pattern (Solid Rectangle)
    * * * * *
    * * * * *
    * * * * *
*/

#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter a number of row : ";
    cin>>a;

    int b;
    cout<<"Enter a number of column : ";
    cin>>b;

    for (int i = 1; i <= a; i++)    // rows
    {
        for (int j = 1; j <= b; j++)    // column
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
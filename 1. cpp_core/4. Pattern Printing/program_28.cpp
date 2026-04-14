/*  Print the pattern (hollow rectangle)
        
    * * * * * * * *
    *             *
    *             *
    * * * * * * * *

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
            if (i == 1 || i == a || j == 1 || j == b)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

/*  i == 1 → first row → all stars.

    i == a → last row → all stars.

    j == 1 → first column → stars at the start of row.

    j == b → last column → stars at the end of row.

    else → " "` → spaces for the hollow part inside the rectangle.
*/
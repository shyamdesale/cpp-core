/*    print the given pattern (Star Traingle Flip)

    * * * *
    * * *
    * * 
    *
*/

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    // Outer loop → controls number of rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop → prints stars
        // (n + 1 - i) means stars decrease every row
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
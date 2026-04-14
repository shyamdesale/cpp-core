/*    print the given pattern (Number Traingle)

    4
    4 3
    4 3 2
    4 3 2 1
*/

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    // Outer loop → controls rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop → prints numbers from n down to (n - i + 1)
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
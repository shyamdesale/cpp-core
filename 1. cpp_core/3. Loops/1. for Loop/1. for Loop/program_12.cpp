// Display this G.P 1, 5, 15, .... upto n terms

#include<iostream>
using namespace std;

int main()
{
    int n;
    // User input: number of terms to print in the G.P.
    cout << "Enter a Number / How many numbers are printing : ";
    cin >> n;

    int n1;
    // User input: first term (starting number) of the G.P.
    cout << "Enter a Starting Number : ";
    cin >> n1;

    // Loop to print 'n' terms of the G.P.
    for (int i = 1; i <= n; i++)
    {
        // Print the current term of the G.P.
        cout << n1 << " ";

        // Calculate the next term by multiplying the current term by 3
        // (common ratio of this G.P. is 3)
        n1 = n1 * 3;
    }
}
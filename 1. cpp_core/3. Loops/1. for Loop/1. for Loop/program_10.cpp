#include<iostream>
using namespace std;

int main()
{
    int n;
    // User input for how many numbers to print in the A.P.
    cout << "Enter a Number / How many numbers are printing : ";
    cin >> n;

    int n1;
    // User input for the common difference (gap) of A.P.
    cout << "Difference in A.P : ";
    cin >> n1;

    int n2;
    // User input for the starting number of the A.P.
    cout << "Enter a Starting Number : ";
    cin >> n2;

    // Loop to print 'n' terms of the A.P.
    for (int i = 1; i <= n; i++)
    {
        // Print current term
        cout << n2 << " ";

        // Calculate the next term by adding the common difference
        n2 = n2 + n1;
    }
}


/* 🔹 Step-by-Step Working

        1. Input n → number of terms to print.
        Example: n = 5 → we want 5 numbers.

        2. Input n1 → common difference (gap) of A.P.
        Example: n1 = 3 → difference between consecutive terms.

        3. Input n2 → starting number of A.P.
        Example: n2 = 4 → series will start from 4.

        4. Loop:
        for (int i = 1; i <= n; i++) → repeats exactly n times.
        Print current term → cout << n2 << " ";
        Update next term → n2 = n2 + n1;

        5. Example Execution (n = 5, n1 = 3, n2 = 4):
        Iteration 1: print 4 → n2 = 7
        Iteration 2: print 7 → n2 = 10
        Iteration 3: print 10 → n2 = 13
        Iteration 4: print 13 → n2 = 16
        Iteration 5: print 16 → n2 = 19
*/
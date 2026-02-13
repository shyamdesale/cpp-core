//  Swap 2 Numbers : (By Function) :
// Pass by value & Pass by reference

#include<iostream>
using namespace std;

// Swap function using pass-by-reference
void swap (int& x , int& y) // x is not a new variable.             y is not a new variable.
                            // x is another name for n1.            y is another name for n2.
{
    int temp = x;   // Store value of x
    x = y;          // Assign y to x
    y = temp;       // Assign old x (stored in temp) to y
}

int main ()
{
    int n1;
    cout << "Enter 1st Number : ";
    cin >> n1;
    int n2;
    cout << "Enter 2nd Number : ";
    cin >> n2;

    // Print original values before swapping
    cout << n1 << "  " << n2 << endl;

    // Call swap function (actual variables are passed by reference)
    swap(n1, n2);

    // Print swapped values
    cout << n1 << "  " << n2 << endl;
    return 0;
}

/*  Algorithm :

    Start
    Input two numbers: n1 and n2
    Call the function swap(n1, n2)
    Inside the swap function:
        a. Store x in temp
        b. Set x = y
        c. Set y = temp
    Return to main program
    Output the swapped values of n1 and n2
    End
*/
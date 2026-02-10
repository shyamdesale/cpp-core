//  Swap 2 Numbers (Without using extra variable) :

#include<iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter 1st Number : ";
    cin >> x;

    int y;
    cout << "Enter 2nd Number : ";
    cin >> y;

    // Print original values
    cout << x << "   " << y << endl;

    // Swap using arithmetic (no extra variable)
    x = x + y;   // x now stores sum of both numbers
    y = x - y;   // y becomes original value of x
    x = x - y;   // x becomes original value of y

    // Print swapped values
    cout << x << "   " << y << endl;
}

/*  Swap Two Numbers Without Temporary Variable

        Start
        Input two numbers: x and y
        Set x = x + y
        Set y = x - y
        (Now y becomes the original value of x)
        Set x = x - y
        (Now x becomes the original value of y)
        Output the swapped values of x and y
        End
*/
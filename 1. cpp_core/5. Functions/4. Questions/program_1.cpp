//  Swap 2 Numbers :

#include<iostream>
using namespace std;

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

    // Use temporary variable to store n1
    int temp = n1;

    // Swap the values
    n1 = n2;
    n2 = temp;

    // Print swapped values
    cout << n1 << "  " << n2 << endl;
    return 0;
}

/*  Algorithm: Swap Two Numbers

        Start
        Input two numbers: n1 and n2
        Store the value of n1 in temp
        Set n1 = n2
        Set n2 = temp
        Output the swapped values of n1 and n2
        End
*/
#include<iostream>
using namespace std;

int main ()
{
    // Create an array of 5 integers
    int arr[5];

    cout << "Enter Array Elements: ";

    // Take 5 inputs from the user
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];   // Store input at index i
    }

    // Replace the first element with 100
    arr[0] = 100;

    // Print all elements of the array
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << "  ";   // Output element at index i
    }

    return 0;
}

/*  Algorithm :
        Create an array of size 5.
        Ask the user to enter 5 integers.
        Store each input in arr[0] to arr[4] using a loop.
        After taking all inputs, overwrite the first element (arr[0]) with 100.
        Run another loop to print all 5 array elements.
        End the program.
*/
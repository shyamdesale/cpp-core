#include<iostream>
using namespace std;

int main()
{
    // Create an array of 5 integers
    int arr[5];

    // Store values in the array
    arr[0] = 6;
    arr[1] = 3;
    arr[2] = 7;
    arr[3] = 2;
    arr[4] = 8;

    // Loop through index 0 to 4 and print each element
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << "  ";  // Print current element
    }

    return 0;
}

/*  Algorithm
        Create an array of size 5.
        Assign the values 6, 3, 7, 2, 8 to the array indices 0 to 4.
        Run a loop from i = 0 to i = 4.
        In each loop iteration, print the value stored at arr[i].
        End the program.
*/
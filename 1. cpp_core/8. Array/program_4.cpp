#include<iostream>
using namespace std;

int main ()
{
    // Create an array of size 5
    int arr[5];
    cout<<"Enter a Array Elements : ";
    // Read 5 integers from the user
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];   // Store input at index i
    }
    
    // Print all 5 integers
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << "  ";   // Output element at index i
    }

    return 0;
}

/*  Algorithm
        Create an integer array of size 5.
        Run a loop from index 0 to 4 and take input for each element from the user.
        Run another loop from index 0 to 4 and print every stored element.
        End the program.
*/
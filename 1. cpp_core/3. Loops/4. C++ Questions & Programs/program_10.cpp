// Write a program to find factorial of a n numbers

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int factorial = 1;  // Variable to store factorial result, initialized to 1

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : Factorial is : ";  // Display current step
        factorial *= i;  // Multiply factorial by current value of i
        cout << factorial << endl;  // Display current factorial value
    }
}
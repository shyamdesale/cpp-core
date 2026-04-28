// Fibonacci Number (Multiple Recursion Calls)

#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base Case: 0th Fibonacci is 0, 1st is 1
    if (n <= 1) return n;

    // Multiple Recursion Calls
    int last = fibonacci(n - 1);
    int secondLast = fibonacci(n - 2);

    // Returning the sum of the last two Fibonacci numbers
    return last + secondLast;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Example: if n = 4, result will be 3
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
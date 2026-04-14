// wap to print sum of digit of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;  // Variable to store the sum of digits

    while (n != 0)
    {
        int ld = n % 10;  // Get the last digit of the number
        n /= 10;          // Remove the last digit from the number
        sum += ld;        // Add the last digit to the sum
    }
    cout << "Sum of digits: " << sum;
}
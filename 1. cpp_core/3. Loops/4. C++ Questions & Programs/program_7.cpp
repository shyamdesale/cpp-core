// wap to print reverse of digit of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reverse = 0;  // Variable to store the reversed number

    while (n != 0)
    {
        int ld = n % 10;      // Get the last digit of the number
        n /= 10;              // Remove the last digit from the number
        reverse *= 10;        // Shift previous digits to the left
        reverse += ld;        // Add the last digit to the reversed number
    }
    cout << "Reverse of digits: " << reverse;
}
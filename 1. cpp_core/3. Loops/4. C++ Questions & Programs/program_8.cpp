#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int sum = n;           // Store the original number in sum
    int reverse = 0;       // Variable to store the reversed number

    while (n != 0)
    {
        int ld = n % 10;      // Extract the last digit of the number
        n /= 10;              // Remove the last digit from the number
        reverse *= 10;        // Shift previous digits in reverse to the left
        reverse += ld;        // Add the extracted digit to the reversed number
    }
    
    sum += reverse;           // Add reversed number to the original number
    cout <<"Sum of orignal number & reverse is : "<< sum;              // Print the sum
}
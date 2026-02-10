// wap to print product of digit of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int product = 1;  // Variable to store the product of digits

    while (n != 0)
    {
        int ld = n % 10;   // Get the last digit of the number
        n /= 10;           // Remove the last digit from the number
        product *= ld;     // Multiply the last digit with the current product
    }
    cout << "Product of digits: " << product;
}
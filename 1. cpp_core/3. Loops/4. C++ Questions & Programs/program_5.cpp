// wap to print sum of all even digit of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    while (n != 0)
    {
        int ld = n % 10;       // Get the last digit of the number
        n /= 10;               // Remove the last digit from the number

        // Check if the digit is even
        if (ld % 2 == 0)
        {
            sum += ld;         // Add the even digit to the sum
        }
    }
    cout << "Sum of even digits: " << sum;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;   // Remove the last digit of the number
        count++;       // Increment count for each removed digit
    }
    // Display the total number of digits
    cout << "Total digits: " << count;
}

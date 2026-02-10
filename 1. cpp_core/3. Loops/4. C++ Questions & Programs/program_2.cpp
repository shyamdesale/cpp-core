#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0; // Variable to store digit count

    // For loop to count number of digits
    for (; n != 0; n /= 10)
    {
        count++;
    }

    cout << "Total digits: " << count <<" ";
}

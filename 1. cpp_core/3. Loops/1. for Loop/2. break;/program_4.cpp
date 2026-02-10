#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    bool flag = true;  // assume number is prime initially

    for (int i = 2; i <= n / 2; i++) 
    {
        // If number is divisible by i, it's not prime
        if (n % i == 0) 
        {
            flag = false; // mark as composite
            break;        // exit loop early (no need to check further)
        }
    }

    // Display result based on the flag value
    if (flag == true) 
    {
        cout << "This is a prime number";
    } 
    else 
    {
        cout << "This is a composite number";
    }
}

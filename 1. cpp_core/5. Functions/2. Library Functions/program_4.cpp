// Combination -
#include<iostream>
using namespace std;

// Function to calculate factorial
int fact (int x)
{
    int factorial = 1;
    // Loop to calculate factorial
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main ()
{
    int n;
    cout<<"Enter a n : ";
    cin>>n;
    int r;
    cout<<"Enter a r : ";
    cin>>r;

    // Basic input validation
    if (r > n)
    {
        cout << "Invalid Input: r cannot be greater than n";
        return 0;
    }
    
    // Using factorial function
    int a = fact(n);    // n!
    int b = fact(r);    // r!
    int c = fact(n - r);    // (n - r)!

    // nCr formula = n! / (r! * (n-r)!)
    cout<<"Combination (nCr) is : "<<a/(b*c);
    return 0;
}
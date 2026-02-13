// Permutation -
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

    if (r > n)
    {
        cout << "Invalid input: r cannot be greater than n";
        return 0;
    }

    // Using factorial function
    int a = fact(n);    // n!
    int b = fact(n - r);    // (n - r)!

    // nPr formula = n! / (n-r)!
    cout<<"Permutation (nPr) is : "<<a/b;
    return 0;
}
// TyypeCasting Defination : Typecasting in C++ is the process of converting one data type into another,
// either automatically by the compiler (implicit) or manually by the programmer (explicit), to ensure compatibility &
// proper data manipulation.

// Example : Take integer 'x' as input and print half of the number

#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    float y = (float) x; // typecasting
    cout<<"Half of the Number is : "<<y/2;
    return 0;
}

    // The program takes an integer input x from the user.
    // It then typecasts x from int to float using (float)x.
    // The converted value is stored in y.
    // Finally, it divides y by 2 and prints half of the number (in decimal form).

    // - In short:
    // This program converts an integer to float to perform accurate (decimal) division and prints half of the entered number.
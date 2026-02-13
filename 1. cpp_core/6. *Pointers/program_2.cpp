#include<iostream>
using namespace std;

int main ()
{
    int x = 2;         // A normal integer variable storing the value 2

    cout << &x << endl; // Prints the MEMORY ADDRESS of variable x
                        // (&x gives the address, not the value)
                        // Output will look like: 0x7ffeefbff45c (varies every run)
    return 0;
}
#include<iostream>
using namespace std;

int main ()
{
    int x = 2;          // Normal integer variable storing value 2

    int* y = &x;        // Pointer 'y' storing the MEMORY ADDRESS of x

    cout << &x << endl; // Prints address of x
    cout << y << endl;  // Prints the same address stored in y
    cout << x << endl;  // Prints value of x (2)
    cout << *y << endl; // Prints value stored at address y -> also 2
    return 0;
}
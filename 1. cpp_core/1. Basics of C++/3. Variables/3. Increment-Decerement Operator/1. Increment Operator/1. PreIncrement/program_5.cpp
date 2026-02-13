#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 5;
    cout<<x<<endl;
    cout<<++x<<endl;
    cout<<x<<endl;
    cout<<++x;
    // This program demonstrates the pre-increment operator (++x) in C++.
    // It increases the value of a variable before it is used. The output shows how the value of x changes step-by-step:
    // Initial → 5, After first increment → 6, After second increment → 7.
    return 0;
}
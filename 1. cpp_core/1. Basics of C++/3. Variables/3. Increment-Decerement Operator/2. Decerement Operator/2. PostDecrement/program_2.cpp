#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 5;
    cout<<x<<endl;
    cout<<x--;
    // This program demonstrates the post-decrement operator (x--) in C++. It uses the current value of x first, then decreases it by 1.
    // Initial value of x = 5
    // cout << x << endl; → prints 5
    // cout << x--; → prints 5, then x becomes 4
    return 0;
}
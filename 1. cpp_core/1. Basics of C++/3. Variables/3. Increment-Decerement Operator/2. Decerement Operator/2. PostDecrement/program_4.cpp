#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 5;
    cout<<x<<endl;
    cout<<x--<<endl;
    cout<<x<<endl;
    cout<<x--;

    // This program demonstrates the post-decrement operator (x--) in C++. It uses the current value first, then decreases it by 1.
    // Step-by-step execution:
    // x = 5 → initialize x.
    // cout << x << endl; → prints 5.
    // cout << x-- << endl; → prints 5, then x becomes 4.
    // cout << x << endl; → prints 4.
    // cout << x--; → prints 4, then x becomes 3.
    return 0;
}
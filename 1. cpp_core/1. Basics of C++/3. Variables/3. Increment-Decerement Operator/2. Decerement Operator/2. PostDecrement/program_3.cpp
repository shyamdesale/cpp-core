#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 5;
    cout<<x<<endl;
    cout<<x--<<endl;
    cout<<x;

    //This program demonstrates the post-decrement operator (x--) in C++. It uses the current value of x first, then decreases it by 1.
    // Step-by-step execution:
    // x = 5 → initialize x.
    // cout << x << endl; → prints 5.
    // cout << x-- << endl; → prints 5, then x becomes 4.
    // cout << x; → prints the updated value 4.
    return 0;
}
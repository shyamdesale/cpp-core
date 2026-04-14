// Display this G.P 1, 2, 4, 8, .... upto n terms

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number / How many numbers are printing : ";
    cin >> n;

    int n1;
    cout << "Enter a Starting Number : ";
    cin >> n1;

    for (int i = 1; i <= n; i++)
    {
        cout << n1 << " ";
        n1 = n1 * 2;
    }
}
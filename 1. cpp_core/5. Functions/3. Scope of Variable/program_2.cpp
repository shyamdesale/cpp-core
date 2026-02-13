#include<iostream>
using namespace std;

int main ()
{
    int n;  
    cout<<"Enter a Number : ";
    cin>>n;

    int i;  
    // Loop counter declared outside so it remains accessible after the loop
    for (i = 1; i <= n; i++)
    {
        // Print numbers from 1 to n
        cout << i << endl;
    }
    // 'i' is still accessible here because it was declared before the loop
    // This prints the value of i after loop ends (which becomes n+1)
    cout << i << endl;
    return 0;
}
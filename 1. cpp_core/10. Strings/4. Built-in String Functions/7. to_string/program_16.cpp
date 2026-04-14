// return the total number of digits in a number without using any lloop

// Hint : Try using inbuilt to_string() function

#include<iostream>
using namespace std;
int main ()
{
    int x = 53293;
    string s = to_string(x);
    cout<<s.length();     
    return 0;                
}
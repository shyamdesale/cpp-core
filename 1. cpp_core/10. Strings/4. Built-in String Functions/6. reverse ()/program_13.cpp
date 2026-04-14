#include<iostream>
using namespace std;
int main ()
{
    string s = "desale";
    cout<<s<<endl;
    int n = s.length();     // n = 6;
    reverse(s.begin() , s.begin() + n/2);
    cout<<s<<endl;
    return 0;
}
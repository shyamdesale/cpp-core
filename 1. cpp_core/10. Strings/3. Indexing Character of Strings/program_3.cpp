#include<iostream>
using namespace std;
int main ()
{
    string s = "SHYAM";
    cout<<s<<endl;
    s[0] = 'R';  // update bhi kr sakte hai string me
    cout<<s<<endl;
    s[1] = s[2] = 'A';
    cout<<s<<endl;
}
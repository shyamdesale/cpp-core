#include<iostream>
using namespace std;
int main ()
{
    string s = "shyam";
    cout<<s<<" "<<s.length()<<endl;

    s = s + " desale";
    cout<<s<<" "<<s.length()<<endl;     // append ke jagha + operator ka bhi use kr sakte hai
}
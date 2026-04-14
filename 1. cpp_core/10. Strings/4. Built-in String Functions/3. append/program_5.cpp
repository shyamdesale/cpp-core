// append karne se ek pura element add kr sakte hai : string s = "shyam" , after append(" desale") , output = shyam desale

#include<iostream>
using namespace std;
int main ()
{
    string s = "shyam";
    cout<<s<<endl;
    s.append(" desale");
    cout<<s<<endl;
    return 0;
}
// pop_back for character ko last se delete karna ex : string s = "shyam" , after pop_back() , output = shya

#include<iostream>
using namespace std;
int main ()
{
    string s = "shyam";
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    return 0;
}
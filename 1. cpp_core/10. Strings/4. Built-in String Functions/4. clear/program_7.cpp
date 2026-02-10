// clear() ye puri string ko khali karta hai : for ex : string s = "shyam" after clear() , output = string empty

#include<iostream>
using namespace std;
int main ()
{
    string s = "Shyam Desale";
    cout<<s.length()<<endl;
    s.clear();
    cout<<s.length()<<endl;     // pure string ke character remove
}
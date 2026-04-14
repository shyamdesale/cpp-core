// input a string of and update all the even positions in the string to character 'a'. consider 0 - based indexing

#include<iostream>
using namespace std;
int main ()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin , s);

    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = 'a';
        }
    }
    cout<<s;
    return 0;
}
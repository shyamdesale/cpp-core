// input a string and count all the vowels in the given string.

#include<iostream>
using namespace std;
int main ()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin , s);
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    cout<<"All the vowel's in the given string is : "<<count;
}
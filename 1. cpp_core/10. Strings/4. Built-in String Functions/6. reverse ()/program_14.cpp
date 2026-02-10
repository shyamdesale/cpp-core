//  input a string of length greter than 5 and reverse the substring from position 2 to 5 using inbuilt function

#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    string s = "desale";
    cout << s << endl;

    reverse(s.begin() + 2, s.begin() + 6);  // reverse index 2 to 5

    cout << s << endl;
}
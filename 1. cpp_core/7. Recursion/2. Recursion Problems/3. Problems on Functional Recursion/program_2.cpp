// 2. String Palindrome Check (Recursive)

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int i, string &s) {
    if (i >= s.size() / 2) return true; // Base case: sab match ho gaye
    
    if (s[i] != s[s.size() - i - 1]) return false; // Match nahi hua toh false
    
    return isPalindrome(i + 1, s);
}

int main() {
    string s = "madam";
    if (isPalindrome(0, s)) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}
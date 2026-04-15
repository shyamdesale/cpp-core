#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int revNum = 0;
    int duplicate = n;
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    return (duplicate == revNum);
}

int main() {
    int n = 121;
    if (isPalindrome(n)) cout << "True";
    else cout << "False";
    return 0;
}
#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0;
    int duplicate = n;
    while (n > 0) {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    return (sum == duplicate);
}

int main() {
    int n = 371;
    if (isArmstrong(n)) cout << "True";
    else cout << "False";
    return 0;
}
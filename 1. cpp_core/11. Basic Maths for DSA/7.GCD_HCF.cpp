#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int a = 20, b = 15;
    cout << "GCD: " << findGCD(a, b);
    return 0;
}
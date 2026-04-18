// 7. Sum of first N numbers (Functional Way)

#include <iostream>
using namespace std;

// Functional: function return karta hai (n + sum of n-1)
int sumFunctional(int n) {
    if (n == 0) return 0;
    return n + sumFunctional(n - 1);
}

int main() {
    int n = 10;
    cout << sumFunctional(n) << endl;
    return 0;
}
// 8. Factorial of N (Functional)

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) return 1; // Base case: 0! is 1
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << factorial(n) << endl;
    return 0;
}
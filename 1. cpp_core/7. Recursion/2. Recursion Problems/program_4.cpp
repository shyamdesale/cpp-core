// 4. Print 1 to N (Using Backtracking)

#include <iostream>
using namespace std;

void print1ToNBacktrack(int i, int n) {
    if (i < 1) return;
    print1ToNBacktrack(i - 1, n);
    cout << i << " "; // Backtrack step
}

int main() {
    int n;
    cin >> n;
    print1ToNBacktrack(n, n);
    return 0;
}
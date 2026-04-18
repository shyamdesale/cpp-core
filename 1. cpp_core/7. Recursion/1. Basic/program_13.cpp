// 5. Print N to 1 (Using Backtracking)

#include <iostream>
using namespace std;

void printNTo1Backtrack(int i, int n) {
    if (i > n) return;
    printNTo1Backtrack(i + 1, n);
    cout << i << " "; // Backtrack step
}

int main() {
    int n;
    cin >> n;
    printNTo1Backtrack(1, n);
    return 0;
}
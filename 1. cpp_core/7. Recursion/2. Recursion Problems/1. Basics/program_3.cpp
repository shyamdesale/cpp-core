// 3. Print N to 1

#include <iostream>
using namespace std;

void printNTo1(int i, int n) {
    if (i < 1) return;
    cout << i << " ";
    printNTo1(i - 1, n);
}

int main() {
    int n;
    cin >> n;
    printNTo1(n, n);
    return 0;
}
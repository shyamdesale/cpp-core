// 2. Print 1 to N

#include <iostream>
using namespace std;

void print1ToN(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    print1ToN(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    print1ToN(1, n);
    return 0;
}
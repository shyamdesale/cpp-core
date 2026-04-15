#include <iostream>
using namespace std;

int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int n = 7789;
    cout << "Number of digits: " << countDigits(n);
    return 0;
}
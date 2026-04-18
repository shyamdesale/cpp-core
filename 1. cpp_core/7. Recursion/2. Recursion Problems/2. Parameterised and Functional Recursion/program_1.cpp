// 6. Sum of first N numbers (Parameterised Way)

#include <iostream>
using namespace std;

// Parameterised: sum variable mein values add hoti ja rahi hain
void sumParameterised(int i, int sum) {
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    sumParameterised(i - 1, sum + i);
}

int main() {
    int n = 10;
    sumParameterised(n, 0);
    return 0;
}
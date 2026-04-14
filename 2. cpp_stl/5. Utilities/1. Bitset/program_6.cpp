// flip() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("10101010");

    b.flip();

    cout << "After flip: " << b;

    return 0;
}

/*
Output
After flip: 01010101
*/
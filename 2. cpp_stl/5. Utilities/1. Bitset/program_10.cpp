#include <iostream>
#include <bitset>
using namespace std;

int main() {

    // create 8-bit bitset
    bitset<8> b("10110100");

    cout << "Original bitset: " << b << endl;

    // count number of set bits
    cout << "Set bits count: " << b.count() << endl;

    // set bit at position 2
    b.set(2);
    cout << "After set(2): " << b << endl;

    // reset bit at position 4
    b.reset(4);
    cout << "After reset(4): " << b << endl;

    // flip all bits
    b.flip();
    cout << "After flip(): " << b << endl;

    // check specific bit
    cout << "Bit at position 3: " << b.test(3) << endl;

    return 0;
}


/*
Original bitset: 10110100
Set bits count: 4
After set(2): 10110100
After reset(4): 10100100
After flip(): 01011011
Bit at position 3: 1
*/
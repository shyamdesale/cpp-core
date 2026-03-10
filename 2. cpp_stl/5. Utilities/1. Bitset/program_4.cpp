// set() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b;

    b.set(2);
    b.set(4);

    cout << "After setting bits: " << b;

    return 0;
}

/*
Output
After setting bits: 00010100
*/
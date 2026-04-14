// count() Example (number of 1 bits)

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("10101100");

    cout << "Number of set bits: " << b.count();

    return 0;
}

/*
Output
Number of set bits: 4
*/
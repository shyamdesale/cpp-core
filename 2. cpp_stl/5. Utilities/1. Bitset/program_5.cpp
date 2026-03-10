// reset() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("11111111");

    b.reset(3);

    cout << "After reset: " << b;

    return 0;
}

/*
Output
After reset: 11110111
*/
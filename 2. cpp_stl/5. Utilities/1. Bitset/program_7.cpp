// test() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("10101010");

    if(b.test(1))
        cout << "Bit 1 is set";
    else
        cout << "Bit 1 is not set";

    return 0;
}

/*
Output
Bit 1 is set
*/
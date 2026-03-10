// size() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("11001100");

    cout << "Bitset size: " << b.size();

    return 0;
}

/*
Output
Bitset size: 8
*/
// to_ulong() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("00001010");

    cout << b.to_ulong();

    return 0;
}

/*
Output
10
*/
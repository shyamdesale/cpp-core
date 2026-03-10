// to_string() Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> b("10110011");

    string s = b.to_string();

    cout << s;

    return 0;
}

/*
Output
10110011
*/
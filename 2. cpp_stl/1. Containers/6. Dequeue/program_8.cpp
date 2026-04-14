#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10,20,30};

    cout << "Element at index 1: " << dq.at(1);

    return 0;
}

/*
Output
Element at index 1: 20
*/
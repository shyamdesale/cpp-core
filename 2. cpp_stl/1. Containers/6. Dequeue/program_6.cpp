#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    if(dq.empty()) {
        cout << "Deque is empty";
    }

    return 0;
}

/*
Output
Deque is empty
*/
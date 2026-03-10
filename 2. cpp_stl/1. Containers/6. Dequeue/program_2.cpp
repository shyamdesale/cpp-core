#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40};

    dq.pop_front();
    dq.pop_back();

    cout << "After pop operations: ";

    for(int x : dq) {
        cout << x << " ";
    }

    return 0;
}

/*
Output
After pop operations: 20 30
*/
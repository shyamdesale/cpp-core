#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1,2,3,4};

    cout << "Forward traversal: ";

    for(auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}

/*
Output
Forward traversal: 1 2 3 4
*/
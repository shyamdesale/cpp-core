#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1,2,3,4};

    cout << "Reverse traversal: ";

    for(auto it = dq.rbegin(); it != dq.rend(); it++) {
        cout << *it << " ";
    }

    return 0;
}

/*
Output
Reverse traversal: 4 3 2 1
*/
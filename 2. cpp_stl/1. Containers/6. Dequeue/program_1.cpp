#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque elements: ";

    for(int x : dq) {
        cout << x << " ";
    }

    return 0;
}

/*
Output
Deque elements: 1 5 10 20
*/
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1,2,3};

    dq.clear();

    cout << "Size after clear: " << dq.size();

    return 0;
}

/*
Output
Size after clear: 0
*/
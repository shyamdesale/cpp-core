#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Create queue (FIFO structure)
    queue<int> q;

    // push elements
    q.push(10);
    q.push(20);
    q.push(30);

    // front element
    cout << "Front element: " << q.front() << endl;

    // rear element
    cout << "Back element: " << q.back() << endl;

    // remove front element
    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    cout << "Queue size: " << q.size() << endl;

    return 0;
}

/*
Output
Front element: 10
Back element: 30
Front after pop: 20
Queue size: 2
*/
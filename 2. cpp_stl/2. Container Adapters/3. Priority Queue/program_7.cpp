#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Default priority_queue (max heap)
    priority_queue<int> pq;

    // push elements
    pq.push(10);
    pq.push(5);
    pq.push(20);

    // largest element comes first
    cout << "Top element: " << pq.top() << endl;

    // remove top element
    pq.pop();

    cout << "Top after pop: " << pq.top() << endl;

    cout << "Priority queue size: " << pq.size() << endl;

    return 0;
}

/*
Output
Top element: 20
Top after pop: 10
Priority queue size: 2
*/
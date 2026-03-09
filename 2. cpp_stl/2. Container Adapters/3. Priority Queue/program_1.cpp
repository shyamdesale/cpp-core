#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << "Top element: " << pq.top(); // largest element

    return 0;
}

// Top element: 20
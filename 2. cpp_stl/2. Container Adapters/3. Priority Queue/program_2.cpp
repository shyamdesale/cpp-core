#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << "Top before pop: " << pq.top() << endl;

    pq.pop();

    cout << "Top after pop: " << pq.top();

    return 0;
}

// Top before pop: 20
// Top after pop: 10
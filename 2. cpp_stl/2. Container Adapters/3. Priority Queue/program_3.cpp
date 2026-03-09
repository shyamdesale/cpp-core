#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << "Size: " << pq.size();

    return 0;
}
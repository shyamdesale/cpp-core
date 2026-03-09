#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);

    cout << "Front element: " << q.front();

    return 0;
}

// Front element: 1
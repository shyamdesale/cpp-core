#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);

    cout << "Front element: " << q.front();

    return 0;
}

// Front element: 10
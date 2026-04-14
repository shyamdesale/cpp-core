#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(5);
    q.push(3);

    cout << "Front: " << q.front() << endl;

    q.pop();

    cout << "Front after pop: " << q.front();

    return 0;
}

// Front: 1
// Front after pop: 5
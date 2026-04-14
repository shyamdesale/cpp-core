#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q1;
    queue<int> q2;

    q1.push(1);
    q2.push(100);

    swap(q1, q2);

    cout << "Front of q1 after swap: " << q1.front();

    return 0;
}
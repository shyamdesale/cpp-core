#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.emplace(5);
    q.emplace(15);
    q.emplace(25);

    cout << "Front element: " << q.front();

    return 0;
}
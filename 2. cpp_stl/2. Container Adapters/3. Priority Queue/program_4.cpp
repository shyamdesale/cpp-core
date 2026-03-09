#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    if(pq.empty())
        cout << "Priority queue is empty";
    else
        cout << "Priority queue is not empty";

    return 0;
}
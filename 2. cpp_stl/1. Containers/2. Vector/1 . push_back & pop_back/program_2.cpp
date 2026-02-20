// Tracking Capacity Growth

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
        cout << "Size: " << v.size()
             << " Capacity: " << v.capacity() << endl;
    }
}

/*  Output
    Size: 1 Capacity: 1
    Size: 2 Capacity: 2
    Size: 3 Capacity: 4
    Size: 4 Capacity: 4
    Size: 5 Capacity: 8
    Size: 6 Capacity: 8
    Size: 7 Capacity: 8
    Size: 8 Capacity: 8
    Size: 9 Capacity: 16
    Size: 10 Capacity: 16
*/
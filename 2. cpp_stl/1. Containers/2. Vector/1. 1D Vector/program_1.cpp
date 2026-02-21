// Absolute Basic Usage

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size after push: " << v.size() << endl;

    v.pop_back();

    cout << "Size after pop: " << v.size() << endl;

    for(int x : v)
        cout << x << " ";
}

/*  Size after push: 3
    Size after pop: 2
    10 20
*/
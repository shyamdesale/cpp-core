#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;

    cout << arr.size() << endl;   // 0

    arr.push_back(0);             // {0}
    arr.push_back(2);             // {0, 2}
    cout << arr.size() << endl;   // 2

    arr.pop_back();               // {0}
    cout << arr.size() << endl;   // 1

    arr.push_back(0);             // {0, 0}
    arr.push_back(2);             // {0, 0, 2}

    arr.clear();                  // {}
    cout << arr.size() << endl;   // 0
}
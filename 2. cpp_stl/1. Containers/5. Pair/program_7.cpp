#include <iostream>
#include <utility>
using namespace std;

int main() {

    // 1. Basic Pair
    pair<int,int> p1 = {1,3};
    cout << "Basic Pair: " << p1.first << " " << p1.second << endl;

    // 2. Pair with Different Data Types
    pair<int,string> p2 = {2,"raj"};
    cout << "Different Type Pair: " << p2.first << " " << p2.second << endl;

    // 3. Nested Pair
    pair<int,pair<int,int>> p3 = {1,{4,5}};
    cout << "Nested Pair: " << p3.first << " "
         << p3.second.first << " "
         << p3.second.second << endl;

    // 4. Array of Pairs
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << "Array Pair Example: "
         << arr[1].first << " "
         << arr[1].second << endl;

    // 5. make_pair()
    pair<int,int> p4;
    p4 = make_pair(10,20);
    cout << "make_pair: " << p4.first << " " << p4.second << endl;

    // 6. Swap Pairs
    pair<int,int> a = {7,8};
    pair<int,int> b = {9,10};

    swap(a,b);

    cout << "After Swap Pair A: "
         << a.first << " "
         << a.second << endl;

    return 0;
}
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls = {1,2,3,4};

    cout << "Forward traversal: ";

    for(auto it = ls.begin(); it != ls.end(); it++)
        cout << *it << " ";

    return 0;
}

/*
Output
Forward traversal: 1 2 3 4
*/
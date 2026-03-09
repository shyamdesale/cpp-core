#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls = {1,2,3,4};

    cout << "Reverse traversal: ";

    for(auto it = ls.rbegin(); it != ls.rend(); it++)
        cout << *it << " ";

    return 0;
}

/*
Output
Reverse traversal: 4 3 2 1
*/
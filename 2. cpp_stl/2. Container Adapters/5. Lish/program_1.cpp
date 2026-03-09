#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls;

    ls.push_back(10);
    ls.push_back(20);
    ls.push_front(5);
    ls.push_front(1);

    cout << "List elements: ";

    for(int x : ls)
        cout << x << " ";

    return 0;
}

/*
Output
List elements: 1 5 10 20
*/
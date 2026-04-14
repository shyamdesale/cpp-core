#include <iostream>
#include <list>
using namespace std;

int main() {

    // create list
    list<int> ls;

    // insert elements
    ls.push_back(20);
    ls.push_back(30);
    ls.push_front(10);
    ls.push_front(5);

    cout << "Initial list: ";
    for(int x : ls)
        cout << x << " ";
    cout << endl;

    // pop operations
    ls.pop_front();
    ls.pop_back();

    cout << "After pop operations: ";
    for(int x : ls)
        cout << x << " ";
    cout << endl;

    // size
    cout << "Size of list: " << ls.size() << endl;

    // traversal using iterator
    cout << "Forward traversal: ";
    for(auto it = ls.begin(); it != ls.end(); it++)
        cout << *it << " ";
    cout << endl;

    // reverse traversal
    cout << "Reverse traversal: ";
    for(auto it = ls.rbegin(); it != ls.rend(); it++)
        cout << *it << " ";
    cout << endl;

    // remove element
    ls.push_back(40);
    ls.push_back(20);
    ls.remove(20);

    cout << "After remove(20): ";
    for(int x : ls)
        cout << x << " ";
    cout << endl;

    // check empty
    if(ls.empty())
        cout << "List is empty\n";
    else
        cout << "List is not empty\n";

    // clear list
    ls.clear();

    cout << "Size after clear: " << ls.size() << endl;

    return 0;
}

/*
Output

Initial list: 5 10 20 30
After pop operations: 10 20
Size of list: 2
Forward traversal: 10 20
Reverse traversal: 20 10
After remove(20): 10 40
List is not empty
Size after clear: 0
*/
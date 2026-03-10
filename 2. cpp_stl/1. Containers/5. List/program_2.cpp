#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls = {10,20,30,40};

    ls.pop_front();
    ls.pop_back();

    cout << "After pop operations: ";

    for(int x : ls)
        cout << x << " ";

    return 0;
}

/*
Output
After pop operations: 20 30
*/
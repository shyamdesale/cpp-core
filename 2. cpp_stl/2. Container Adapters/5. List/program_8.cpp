#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls = {10,20,30,20,40};

    ls.remove(20);

    cout << "After remove: ";

    for(int x : ls)
        cout << x << " ";

    return 0;
}

/*
Output
After remove: 10 30 40
*/
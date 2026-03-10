#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> ls = {1,2,3,2,4,2};

    // remove all occurrences of value 2
    ls.remove(2);

    for(auto x : ls)
        cout << x << " ";

    return 0;
}

/*
Original list
1 2 3 2 4 2

After remove(2)
1 3 4
*/
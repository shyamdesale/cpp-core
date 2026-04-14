#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls = {1,2,3};

    ls.clear();

    cout << "Size after clear: " << ls.size();

    return 0;
}

/*
Output
Size after clear: 0
*/
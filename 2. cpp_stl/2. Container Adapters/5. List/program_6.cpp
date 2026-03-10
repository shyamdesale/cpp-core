#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls;

    if(ls.empty())
        cout << "List is empty";

    return 0;
}

/*
Output
List is empty
*/
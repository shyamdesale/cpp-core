// Using make_pair()

#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int,int> p;

    p = make_pair(10,20);

    cout << p.first << " " << p.second;

}
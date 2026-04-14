// Swapping Pairs

#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int,int> p1 = {1,2};
    pair<int,int> p2 = {3,4};

    swap(p1,p2);

    cout << p1.first << " " << p1.second;

}
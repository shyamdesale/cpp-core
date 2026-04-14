#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mpp;

    mpp["a"] = 1;
    mpp["b"] = 2;
    mpp["c"] = 3;
    mpp["d"] = 4;

    auto it1 = mpp.begin();
    auto it2 = mpp.begin();
    advance(it2,2);

    mpp.erase(it1,it2);

    for(auto it : mpp)
        cout << it.first << " -> " << it.second << endl;
}
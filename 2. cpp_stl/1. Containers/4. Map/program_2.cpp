#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mpp;

    mpp["raj"] = 27;
    mpp["hima"] = 31;

    // update
    mpp["raj"] = 29;

    for(auto it : mpp)
        cout << it.first << " -> " << it.second << endl;
}
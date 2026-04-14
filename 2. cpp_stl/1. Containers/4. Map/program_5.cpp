#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mpp;

    mpp["raj"] = 27;
    mpp["hima"] = 31;

    auto it = mpp.find("raj");

    if(it != mpp.end())
        cout << "Found -> " << it->first << " " << it->second;
}
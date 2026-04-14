#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mpp;

    mpp["raj"] = 27;
    mpp["hima"] = 31;

    mpp.clear();

    cout << "Size: " << mpp.size();
}
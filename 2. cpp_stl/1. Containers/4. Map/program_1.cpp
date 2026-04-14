#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    // map only stores unique keys
    map<string, int> mpp;

    // Key-Value insertion
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["sandeep"] = 67;
    mpp["tank"] = 89;

    // Updating existing key
    mpp["raj"] = 29;

    // Printing all values
    for(auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
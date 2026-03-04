#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    map<string, int> mpp;

    // Insert values
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["sandeep"] = 67;
    mpp["tank"] = 89;

    // Update value
    mpp["raj"] = 29;

    // Insert using emplace
    mpp.emplace("aman", 45);

    cout << "Map elements:\n";
    for(auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // Find element
    auto it = mpp.find("raj");
    if(it != mpp.end())
        cout << "\nFound: " << it->first << " -> " << it->second << endl;

    // Erase by key
    mpp.erase("tank");

    // Erase first element
    mpp.erase(mpp.begin());

    // Erase range (first two elements)
    auto start = mpp.begin();
    auto end = mpp.begin();
    advance(end, 2);
    mpp.erase(start, end);

    cout << "\nAfter erase operations:\n";
    for(auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // Clear map
    mpp.clear();

    cout << "\nMap size after clear: " << mpp.size() << endl;

    return 0;
}
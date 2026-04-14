#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> mp;

    mp["raj"] = 27;
    mp["hima"] = 31;
    mp["sandeep"] = 67;
    mp["tank"] = 89;

    mp["raj"] = 29;   // update value

    for(auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

}
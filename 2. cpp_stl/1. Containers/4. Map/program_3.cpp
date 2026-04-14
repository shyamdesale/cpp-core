#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string,int> mpp;

    mpp.emplace("raj",27);
    mpp.emplace("hima",31);

    for(auto it : mpp)
        cout << it.first << " -> " << it.second << endl;
}
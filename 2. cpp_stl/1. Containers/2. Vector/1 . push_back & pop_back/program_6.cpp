#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1(4, 0);      // {0,0,0,0}
    vector<int> vec2(4, 10);     // {10,10,10,10}

    // Copy using iterator range
    vector<int> vec3(vec2.begin(), vec2.end());

    cout << "vec1: ";
    for (int x : vec1) cout << x << " ";
    cout << endl;

    cout << "vec2: ";
    for (int x : vec2) cout << x << " ";
    cout << endl;

    cout << "vec3: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1(4, 0);      // {0,0,0,0}

    // Copy using iterator range
    vector<int> vec2(vec1);
    cout << "vec2: ";
    for (int x : vec2) cout << x << " ";
    
    return 0;
}
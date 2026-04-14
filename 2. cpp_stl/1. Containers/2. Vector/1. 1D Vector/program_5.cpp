// Undo Feature Simulation
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> history;

    history.push_back("Type A");
    history.push_back("Type B");
    history.push_back("Delete A");

    cout << "Current: " << history.back() << endl;

    // Undo last operation
    history.pop_back();
    cout << "After Undo: " << history.back() << endl;
}

/*  Output :
    Current: Delete A
    After Undo: Type B
*/
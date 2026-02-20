// Stack Implementation Using Vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stack;

    // Push
    stack.push_back(5);
    stack.push_back(10);
    stack.push_back(15);

    // Top
    cout << "Top element: " << stack.back() << endl;

    // Pop
    stack.pop_back();

    cout << "New Top: " << stack.back() << endl;
}

/*  Output :
    Top element: 15
    New Top: 10
*/
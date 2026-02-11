#include <iostream>
using namespace std;

// Returns true if age is between 0 and 150 (inclusive)
bool validateAge(int age) {
    return age >= 0 && age <= 150;
}

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (validateAge(age)) {
        cout << "Valid age" << endl;
    } else {
        cout << "Invalid age" << endl;
    }

    return 0;
}

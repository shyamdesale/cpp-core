#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Declare set
    set<int> numbers;

    // Insert elements
    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(10);  // Duplicate (will be ignored)

    // Print elements (sorted automatically)
    cout << "Set elements: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }
    cout << endl;

    // Check if element exists
    if (numbers.find(30) != numbers.end())
    {
        cout << "30 found in set" << endl;
    }

    // Remove element
    numbers.erase(10);

    cout << "After erase: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }
    cout << endl;

    // Size of set
    cout << "Size: " << numbers.size() << endl;

    return 0;
}
#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Read the number of elements to be inserted
    size_t n;
    cin >> n;

    // Declare a set to store unique integers in sorted (ascending) order
    set<int> st;

    // Input loop:
    // Insert each value into the set.
    // The set automatically removes duplicates and maintains sorted order.
    for (size_t i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        st.insert(value);
    }

    // Print all unique elements in ascending order
    for (const int value : st)
    {
        cout << value << " ";
    }
    cout << '\n';

    // Safely remove the smallest element
    if (!st.empty())
    {
        st.erase(st.begin());
    }

    // Print the set after removing the smallest element
    cout << "After erase: ";
    for (const int value : st)
    {
        cout << value << " ";
    }

    cout << '\n';
    return 0;
}
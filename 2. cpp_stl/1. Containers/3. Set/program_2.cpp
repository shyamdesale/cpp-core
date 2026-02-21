#include <iostream>
#include <set>

int main()
{
    // Read the number of elements to be inserted
    std::size_t n;
    std::cin >> n;

    // Declare a set to store unique integers in sorted (ascending) order
    std::set<int> st;

    // Input loop:
    // Insert each value into the set.
    // The set automatically removes duplicates and maintains sorted order.
    for (std::size_t i = 0; i < n; ++i)
    {
        int value;
        std::cin >> value;
        st.insert(value);
    }

    // Print all unique elements in ascending order
    for (const int value : st)
    {
        std::cout << value << " ";
    }
    std::cout << '\n';

    // Safely remove the smallest element.
    // st.begin() points to the first (smallest) element in the set.
    // Always check if the set is not empty before erasing.
    if (!st.empty())
    {
        st.erase(st.begin());
    }

    // Print the set after removing the smallest element
    std::cout << "After erase: ";
    for (const int value : st)
    {
        std::cout << value << " ";
    }

    std::cout << '\n';
    return 0;
}
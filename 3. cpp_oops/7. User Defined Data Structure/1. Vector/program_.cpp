/*  Definition -

        A vector is a dynamic array in C++ that can grow or shrink in size automatically.
        Part of the STL (Standard Template Library).
        Stores elements of the same type contiguously in memory.

    Main Concepts -

        Dynamic Sizing - Unlike arrays, size can change at runtime.
        Random Access - Access elements using an index (like arrays).
        Efficient Insertion/Deletion - Fast at the end, slower in the middle or beginning.
        STL Functions - Provides built-in functions like push_back(), pop_back(), size(), empty().
        Template Class - Works for any data type: vector<int>, vector<string>, etc.

    Syntax

        #include <iostream>
        #include <vector>
        using namespace std;

        int main() {
            vector<int> v;            // Empty vector of integers
            vector<int> v2(5, 10);    // Vector of size 5, all elements initialized to 10

            // Adding elements
            v.push_back(1);           // Adds 1 at the end
            v.push_back(2);

            // Access elements
            cout << v[0];             // Using index
            cout << v.at(1);          // Using at() with bounds checking

            // Size of vector
            cout << v.size();

            // Remove last element
            v.pop_back();

            return 0;
        }
*/
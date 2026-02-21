#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a 10x20 2D vector where all elements are initialized to 0
    vector<vector<int>> vec(10, vector<int>(20, 0));

    // Traverse each row of the 2D vector
    for (const auto& row : vec)
    {
        // Traverse each element in the current row
        for (const auto& val : row)
        {
            // Print the element (all will be 0)
            cout << val << " ";
        }

        // Move to the next line after printing one row
        cout << '\n';
    }

    return 0;
}
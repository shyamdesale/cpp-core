#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a 3D vector: 10 x 20 x 30 initialized with 0
    vector<vector<vector<int>>> vec(10, vector<vector<int>>(20, vector<int>(30, 0)));

    // Traverse and print all elements
    for (const auto& matrix : vec)
    {
        for (const auto& row : matrix)
        {
            for (const auto& val : row)
            {
                cout << val << " ";
            }
            cout << '\n';
        }
        cout << '\n'; // Separate each 2D layer
    }

    return 0;
}
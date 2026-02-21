#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a 3D vector: 5 x 4 x 3 initialized with 0
    vector<vector<vector<int>>> cube(5, vector<vector<int>>(4, vector<int>(3, 0)));

    // Traverse and print all elements
    for (const auto& layer : cube)
    {
        for (const auto& row : layer)
        {
            for (const auto& value : row)
            {
                cout << value << " ";
            }
            cout << '\n';
        }
        cout << '\n';  // Separate each 2D layer
    }

    return 0;
}
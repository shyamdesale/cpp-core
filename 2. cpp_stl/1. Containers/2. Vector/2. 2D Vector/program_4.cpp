// feat(stl-vector): implement 2D vector matrix creation, insertion, and range-based traversal

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare a 2D vector to store integer matrix data
    vector<vector<int>> matrix;

    // Create and populate first row
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(3);

    // Create and populate second row
    vector<int> row2;
    row2.push_back(8);
    row2.push_back(23);
    row2.push_back(2);

    // Insert rows into the 2D vector (matrix)
    matrix.push_back(row1);
    matrix.push_back(row2);

    // Display matrix elements
    cout << "2D Vector Elements:\n";

    // Traverse each row of the matrix
    for (const auto& row : matrix)
    {
        // Traverse each element inside the current row
        for (const auto& value : row)
        {
            cout << value << " ";
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}
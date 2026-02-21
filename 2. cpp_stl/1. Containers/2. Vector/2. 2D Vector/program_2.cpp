#include <iostream>
#include <vector>
using namespace std;

/*
    Program: 2D Vector (Jagged Matrix) Demonstration
    -----------------------------------------------
    - Creates a 2D vector using push_back
    - Rows have different sizes (jagged structure)
    - Traverses and prints all elements
    - Displays row count and column count per row
*/

int main()
{
    // Declare a 2D vector (matrix)
    vector<vector<int>> shyam;

    // First row
    vector<int> shyam1;
    shyam1.push_back(1);
    shyam1.push_back(3);

    // Second row
    vector<int> shyam2;
    shyam2.push_back(8);
    shyam2.push_back(23);
    shyam2.push_back(2);

    // Insert rows into 2D vector
    shyam.push_back(shyam1);
    shyam.push_back(shyam2);

    // Output header
    cout << "2D Vector Elements:\n";

    // Traverse and print matrix
    for (int i = 0; i < shyam.size(); i++)
    {
        for (int j = 0; j < shyam[i].size(); j++)
        {
            cout << shyam[i][j] << " ";
        }
        cout << endl;
    }

    // Metadata output
    cout << "\nTotal Rows: " << shyam.size() << endl;
    cout << "Elements in Row 0: " << shyam[0].size() << endl;
    cout << "Elements in Row 1: " << shyam[1].size() << endl;

    return 0;
}
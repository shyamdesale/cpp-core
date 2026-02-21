#include <iostream>
#include <vector>
using namespace std;

/*
    Program: 2D Vector with Multiple Rows
    -------------------------------------
    Creates a jagged 2D vector and prints all elements.
*/

int main()
{
    // Declare 2D vector
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

    // Third row
    vector<int> shyam3;
    shyam3.push_back(6);
    shyam3.push_back(4);
    shyam3.push_back(3);

    // Insert rows
    shyam.push_back(shyam1);
    shyam.push_back(shyam2);
    shyam.push_back(shyam3);

    cout << "2D Vector Elements:\n";

    // Traverse
    for (int i = 0; i < shyam.size(); i++)
    {
        for (int j = 0; j < shyam[i].size(); j++)
        {
            cout << shyam[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
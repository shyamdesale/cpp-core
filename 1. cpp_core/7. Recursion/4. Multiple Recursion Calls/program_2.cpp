// 1. Grid Path Problem (Ways to Reach Destination)

#include <iostream>
using namespace std;

// Function to count all possible paths in a grid
int countPaths(int i, int j, int m, int n) {
    // Base Case: Destination reached
    if (i == m - 1 && j == n - 1) return 1;
    
    // Base Case: Out of boundaries
    if (i >= m || j >= n) return 0;

    // Multiple calls: Move Right + Move Down
    int right = countPaths(i, j + 1, m, n);
    int down = countPaths(i + 1, j, m, n);

    return right + down;
}

int main() {
    int m = 3, n = 3; // 3x3 Grid
    cout << "Total paths: " << countPaths(0, 0, m, n) << endl;
    return 0;
}
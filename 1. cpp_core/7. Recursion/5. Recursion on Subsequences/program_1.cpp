// Printing Subsequences (Pick & Non-Pick Logic)

#include <iostream>
#include <vector>
using namespace std;

// Function to print all subsequences
void printSubsequences(int index, vector<int> &ds, int arr[], int n) {
    // Base Case: Agar index array ke end tak pahunch gaya
    if (index == n) {
        if (ds.size() == 0) {
            cout << "{}"; // Empty subsequence
        } else {
            for (auto it : ds) cout << it << " ";
        }
        cout << endl;
        return;
    }

    // 1. PICK the current element
    ds.push_back(arr[index]);
    printSubsequences(index + 1, ds, arr, n);

    // 2. NOT PICK the current element (Backtracking step)
    ds.pop_back(); // Element hatao taaki next call mein na jaye
    printSubsequences(index + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    
    cout << "All Subsequences:" << endl;
    printSubsequences(0, ds, arr, n);

    return 0;
}
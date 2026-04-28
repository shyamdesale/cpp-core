// 1. Printing Subsequences whose Sum is K

#include <iostream>
#include <vector>
using namespace std;

// Function to print subsequences with sum equal to K
void printS(int index, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (index == n) {
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    // PICK the element
    ds.push_back(arr[index]);
    s += arr[index];
    printS(index + 1, ds, s, sum, arr, n);

    // NOT PICK the element (Backtrack)
    s -= arr[index];
    ds.pop_back();
    printS(index + 1, ds, s, sum, arr, n);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2; // Target sum
    vector<int> ds;
    
    cout << "Subsequences with sum " << sum << ":" << endl;
    printS(0, ds, 0, sum, arr, n);
    return 0;
}
// 2. Print Only ONE Subsequence with Sum K

#include <iostream>
#include <vector>
using namespace std;

bool printOne(int index, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (index == n) {
        // Condition satisfied
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
            return true;
        }
        // Condition not satisfied
        return false;
    }

    // PICK
    ds.push_back(arr[index]);
    s += arr[index];
    if (printOne(index + 1, ds, s, sum, arr, n)) return true;

    // NOT PICK
    s -= arr[index];
    ds.pop_back();
    if (printOne(index + 1, ds, s, sum, arr, n)) return true;

    return false;
}
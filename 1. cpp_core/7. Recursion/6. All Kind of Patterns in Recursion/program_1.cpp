// 1. Print All Subsequences with Sum K

#include <iostream>
#include <vector>
using namespace std;

void printS(int index, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (index == n) {
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    // PICK
    ds.push_back(arr[index]);
    s += arr[index];
    printS(index + 1, ds, s, sum, arr, n);

    // NOT PICK
    s -= arr[index];
    ds.pop_back();
    printS(index + 1, ds, s, sum, arr, n);
}
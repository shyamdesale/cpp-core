// 3. Count Subsequences with Sum K

#include <iostream>
using namespace std;

int countS(int index, int s, int sum, int arr[], int n) {
    if (index == n) {
        if (s == sum) return 1;
        else return 0;
    }
    // PICK branch
    s += arr[index];
    int l = countS(index + 1, s, sum, arr, n);

    // NOT PICK branch
    s -= arr[index];
    int r = countS(index + 1, s, sum, arr, n);

    return l + r; // Total count from both branches
}
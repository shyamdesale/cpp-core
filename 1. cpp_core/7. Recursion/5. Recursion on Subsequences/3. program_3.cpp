// 2. Count Subsequences with Sum K

#include <iostream>
using namespace std;

// Function to return the COUNT of subsequences with sum K
int countS(int index, int s, int sum, int arr[], int n) {
    // Condition not satisfied (Optimization for positive arrays only)
    // if(s > sum) return 0; 

    if (index == n) {
        // Condition satisfied
        if (s == sum) return 1;
        // Condition not satisfied
        else return 0;
    }

    // PICK
    s += arr[index];
    int l = countS(index + 1, s, sum, arr, n);

    // NOT PICK
    s -= arr[index];
    int r = countS(index + 1, s, sum, arr, n);

    // Return the total count from both branches
    return l + r;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    
    cout << "Total count of subsequences: " << countS(0, 0, sum, arr, n) << endl;
    return 0;
}
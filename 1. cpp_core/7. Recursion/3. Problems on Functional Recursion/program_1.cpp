// 1. Reverse an Array (Recursive)

#include <iostream>
#include <algorithm>
using namespace std;

// Optimized with single pointer 'i'
void reverseArray(int i, int arr[], int n) {
    if (i >= n / 2) return; // Base case: middle tak pahunch gaye
    
    swap(arr[i], arr[n - i - 1]); // Swapping elements
    reverseArray(i + 1, arr, n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArray(0, arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
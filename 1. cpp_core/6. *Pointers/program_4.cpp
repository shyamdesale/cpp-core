#include<iostream>
using namespace std;

// Function to swap two integers using pointers
void swap(int* a, int* b) {
    int temp = *a;  // Store the value pointed by 'a' in temp
    *a = *b;        // Assign the value pointed by 'b' to the location pointed by 'a'
    *b = temp;      // Assign temp (original value of 'a') to the location pointed by 'b'
}

int main() {
    int x = 4;  // Initialize x
    int y = 5;  // Initialize y
    cout << x << "  " << y << endl;  // Print original values of x and y
    swap(x, y);
    cout << x << "  " << y << endl;  // Print swapped values (won't change with wrong call)
}
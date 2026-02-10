// find the sum of all elements in a given matrix :


#include<iostream>
using namespace std;

int main () {
    
    int r;
    cout << "Enter a Number of Row : ";
    cin >> r;

    int c;
    cout << "Enter a Number of Column : ";
    cin >> c;

    int sum = 0;             // variable to store total sum

    int arr[r][c];           // matrix declaration (VLA - works on GCC)

    // take matrix input from user
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // add all elements of the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];   // accumulate sum
        }
    }

    // print final sum
    cout <<"Sum of all elements in given matrix : "<< sum;
}
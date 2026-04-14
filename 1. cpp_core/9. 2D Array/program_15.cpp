// given a matrix 'a' of dimension nxm and 2 coordinates (l1 , r1) and (l2 , r2). Return the sum of the
// rectangle from (l1 , r1) to (l2 , r2)

#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows: ";
    cin >> r;

    cout << "Enter cols: ";
    cin >> c;

    int arr[r][c];

    cout << "Enter matrix values:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int r1, r2, c1, c2;
    cout << "Enter starting and ending row: ";
    cin >> r1 >> r2;

    cout << "Enter starting and ending column: ";
    cin >> c1 >> c2;

    int sum = 0;

    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Rectangle Sum = " << sum;
    return 0;
}

/*  Print the pattern
        
    *          *
      *     *
         
      *     *
    *          *

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (odd number): ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // stars only on diagonals except middle row
            if(i != n/2 && (j == i || j == n - i - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

}
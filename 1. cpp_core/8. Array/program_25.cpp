/*  if an array arr contains n elements , then check if the given array is a palindrome or not
    ex ; arr[] = {1,2,3,4,3,2,1};
    ex : arr[] = {1,2,3,3,2,1};
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pal = 1; // assume palindrome

    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            pal = 0; // not palindrome
            break;
        }
    }

    if (pal == 1)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
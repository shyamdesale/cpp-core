// write a program to reverse the array without using any extra array

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // Original array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // Two-pointer technique
    int i = 0;          // Start pointer
    int j = n - 1;      // End pointer

    // Swap until both pointers meet
    while (i < j)
    {
        int temp = arr[i];  // Store left element
        arr[i] = arr[j];    // Put right element on left
        arr[j] = temp;      // Put temp on right

        i++;    // Move left pointer forward
        j--;    // Move right pointer backward
    }

    cout<<endl;
    
    // Print reversed array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}
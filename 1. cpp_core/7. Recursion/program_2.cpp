#include<iostream>
using namespace std;

// Function that prints "Shyam" and then calls itself
void srd()
{
    cout << "Shyam" << endl;  // Print "Shyam"
    srd();                     // ❌ Recursive call without base case → infinite recursion
}

int main()
{
    srd();  // Call the srd() function
    // Program will keep printing "Shyam" endlessly until stack overflow occurs
}

/*  Algorithm: Infinite Recursive Print of "Shyam"

    Output: Prints "Shyam" infinitely until stack overflow occurs

        Steps:

            1. Start program execution.
            2. Call the function srd().
            3. Inside srd() function:
                a. Print "Shyam" to the console.
                b. Call srd() again (recursive call).
            4. Repeat Step 3 indefinitely because there is no base case to stop recursion.
            5. Program will eventually terminate abnormally due to stack overflow.
            6. End (only after crash).
*/
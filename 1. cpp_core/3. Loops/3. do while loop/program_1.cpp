/*    🧠 Definition
        The do-while loop is an exit-controlled loop in C++.
        It executes the loop body at least once, and then checks the condition.
        If the condition is true, the loop repeats; otherwise, it stops.

    🧩 Syntax
        do {
            // loop body (statements)
        } while (condition);

    Note: The semicolon (;) after the while(condition) is mandatory.

    💡 Main Concepts
        Initialization: Set up loop control variable before the do block.
        Execution: The code inside {} runs once unconditionally.
        Condition Check: After execution, the while(condition) is evaluated.
        Repetition: If condition is true, the loop runs again.
        Termination: Loop ends when condition becomes false.

    🧾 Example
        #include <iostream>
        using namespace std;

        int main() {
            int i = 1;
            do {
                cout << "Number: " << i << endl;
                i++;
            } while (i <= 5);
            return 0;
        }

    Output:

        Number: 1
        Number: 2
        Number: 3
        Number: 4
        Number: 5
*/
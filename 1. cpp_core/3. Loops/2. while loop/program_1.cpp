/*    🔹 Definition
        A while loop is used to execute a block of code repeatedly as long as a given condition is true.
        It is a pre-test loop → the condition is checked before the loop body executes.

    🔹 Syntax
        while (condition)
        {
            // statements
        }

    🔹 Main Concept (Point-wise)
        The condition is checked before each iteration.
        If the condition is true, the loop body executes.
        If the condition is false, the loop stops.
        Used when the number of iterations is unknown in advance.
        Must update variables inside the loop (to avoid infinite loops).

    🔹 Example
        int i = 1;          // Initialization
        while (i <= 5)      // Condition check
        {
            cout << i << " ";  // Statement
            i++;               // Update
        }


    Output:

    1 2 3 4 5
*/
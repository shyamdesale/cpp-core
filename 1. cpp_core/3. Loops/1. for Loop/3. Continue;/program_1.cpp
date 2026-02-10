/*        🔹 Definition
            The continue statement is used inside loops (for, while, or do-while).
            It skips the remaining code inside the loop for the current iteration and jumps to the next iteration of the loop.

        🔹 Syntax
            continue;

        Used inside a loop (usually within an if condition):

            for (int i = 1; i <= 10; i++) {
                if (i == 5)
                    continue;   // Skip when i is 5
                cout << i << " ";
            }

        🔹 Main Concept (Point-wise)
            Executes only inside loops.
            When encountered, it skips the rest of the statements in that iteration.
            Control immediately moves to the next iteration of the loop.
            Does not terminate the loop (unlike break;).
            Commonly used to ignore specific values or skip certain conditions during looping.

        🔹 Example Output
            Example: Skipping number 5
            for (int i = 1; i <= 7; i++) {
                if (i == 5)
                    continue;
                cout << i << " ";
            }

            Output:

            1 2 3 4 6 7
*/
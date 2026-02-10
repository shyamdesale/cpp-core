/*  Definition:
        Recursion is when a function calls itself to solve a smaller instance of the same problem.

    Key Concept:
        Every recursive function has two parts:
        a) Base case → Stops the recursion to prevent infinite calls.
        b) Recursive case → The function calls itself with a smaller or simpler input.

    Why Use Recursion:
        Simplifies problems that have repetitive subproblems (e.g., factorial, Fibonacci, tree traversal).

    Important Rules:
        Must eventually reach the base case.
        Each call is stored in the call stack, which can lead to stack overflow if uncontrolled.

    Example in Short:
        Factorial of n:

    factorial(n) = 1, if n == 0
    factorial(n) = n * factorial(n-1), if n > 0
*/
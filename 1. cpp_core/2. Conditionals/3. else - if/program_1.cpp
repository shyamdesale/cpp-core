    /* else if - Defination :
        In C++, the else if statement is used to check multiple conditions in a sequence.
    It allows a program to decide which block of code to execute among several possible alternatives.

    Syntax :
    if (condition1) {
        Executes if condition1 is true
    }
    else if (condition2) {
        Executes if condition1 is false AND condition2 is true
    }
    else if (condition3) {
        Executes if all previous conditions are false AND condition3 is true
    }
    else {
        Executes if all above conditions are false
    }

    🔹 Main Concept / Working:

        The program checks the first if condition.
        If it’s true, that block runs and the rest are skipped.
        If the first condition is false, it moves to the next else if condition.
        This continues until it finds a true condition or reaches the else block.
        The else block (optional) runs only if none of the previous conditions are true.
/* 🟩 Definition
In C++, multiple conditions are created by combining two or more logical expressions using logical operators such as
&& (AND) and || (OR).
These operators allow the program to make complex decisions by evaluating whether two or more conditions are true or false.

Syntax :

if (condition1 && condition2) {
    // Executes when BOTH condition1 and condition2 are true
}
else if (condition1 || condition3) {
    // Executes when EITHER condition1 or condition3 is true
}
else {
    // Executes when none of the above are true
}


🟦 Main Concept
The main concept of using multiple conditions is to control program flow based on more than one condition at the same time.

&& (AND) → The combined condition is true only if all the individual conditions are true.

|| (OR) → The combined condition is true if any one of the individual conditions is true.
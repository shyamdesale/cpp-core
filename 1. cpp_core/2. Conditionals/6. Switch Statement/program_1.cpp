/*  🔹 Definition
        A switch statement is a multi-way branch statement that allows a variable to be tested for equality against
        multiple constant values (called case labels).
        It is an alternative to using multiple if-else-if statements.

    🔹 Main Concept
        The value of an expression is compared with several case labels.
        When a match is found, the statements under that case are executed.
        break is used to exit the switch after a case executes.
        If no case matches, the default case (if present) executes.

    🔹 Syntax
        switch (expression) {
            case constant1:
                // statements
                break;

            case constant2:
                // statements
                break;

            ...

            default:
                // statements
        }

    🔹 Important Points
        expression must evaluate to an integer or character type.
        case labels must be constant values (no variables).
        break prevents fall-through to the next case.
        default is optional but recommended.
        Execution starts from the matched case and continues until a break or end of switch.
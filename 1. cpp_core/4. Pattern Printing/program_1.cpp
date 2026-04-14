/*    🔹 1. Definition
        Pattern printing in C++ means displaying characters, numbers, or symbols (like *, #, digits, or alphabets) on the
        console in a specific shape or structure — for example, triangles, squares, or pyramids.

    🔹 2. Main Concept
    Pattern printing is mainly about:
    Controlling rows and columns using nested loops.
    Deciding what to print (*, number, alphabet, or space).
    Understanding logic behind spaces and symbols for shape alignment.

    🔹 3. Key Points (Core Concepts)
        (1) Use of Nested Loops
    Outer loop → Controls the number of rows.
    Inner loop → Controls the number of columns in each row.
    Example:

    for (int i = 1; i <= n; i++) {        // Outer loop → rows
        for (int j = 1; j <= i; j++) {    // Inner loop → columns
            cout << "* ";
        }
        cout << endl;
    }
        (2) Row and Column Relation
    The relationship between i (row number) and j (column number) defines the pattern.
    Example:

    j <= i → right-angled triangle.

    j <= n - i + 1 → inverted triangle.

        (3) Space Management
    Spaces (" ") decide alignment or shape (centered pyramid, diamond, etc.).

    Usually handled by another inner loop before printing symbols.

        (4) Printing Characters or Numbers
    You can print:

    * for simple shapes.

    i or j for numeric patterns.

    char('A' + j) for alphabet patterns.

        (5) Increment / Decrement Logic
    Increasing or decreasing loop counters changes the shape (normal vs inverted).

        (6) Line Break (endl)
    After each row, always print a new line.

        (7) Pattern Categories
    Common types:
    Square / Rectangle
    Right-angled triangle
    Inverted triangle
    Pyramid
    Number / Alphabet patterns
    Diamond / Hourglass

    🔹 4. Example
        Right-angled triangle:

    #include <iostream>
    using namespace std;

    int main() {
        int n;
        cout << "Enter number of rows: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        return 0;
    }
    Output (for n=5):

    *
    * *
    * * *
    * * * *
    * * * * *
*/
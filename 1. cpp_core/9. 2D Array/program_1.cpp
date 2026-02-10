/*  2D ARRAY —
        A 2D array is an array of arrays.
        It stores data in rows and columns like a matrix/table.
        All elements must be of the same data type.
        Memory is stored contiguously (row by row in C++).

    MAIN SYNTAX -
        Declaration
        int arr[rows][cols];

        Declaration + Initialization
        int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };

    Accessing an element -
        arr[i][j];   // i = row index, j = column index

    Input -
        cin >> arr[i][j];

    Output -
        cout << arr[i][j];

    MAIN CONCEPTS -
        Indexing starts from 0 → rows: 0 to r-1, columns: 0 to c-1.
        arr[i][j] → element in i-th row and j-th column.
        Nested loops are used to input/output a 2D array.
        Stored in row-major order (row by row).
        Number of elements = rows * columns.
        Memory for 2D array gets allocated statically (if declared normally).
        Works like a matrix structure in programming.

    int arr[r][c]; = r = row , c = column

    int arr[4][3]; 4*3 matrixs
    . . . . . . . 
    .   .   .   .   .
    . . . . . . .
    .   .   .   .
    . . . . . . .
    .   .   .   .
    . . . . . . .
    .   .   .   .
    . . . . . . .

*/
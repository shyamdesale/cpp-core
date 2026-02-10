/*  Array : -
        1. Definition
        Fixed-size, same-type elements, stored in continuous memory.
        2. Syntax
        datatype name[size];
        3. Initialization
        int a[5] = {1,2,3,4,5};
        int a[5] = {1,2};   // rest → 0
        int a[]  = {10,20,30};
        4. Access
        a[i];   // index 0 to size-1
        5. Input/Output
        cin >> a[i];
        cout << a[i];
        6. 2D Array
        int m[3][3];
        m[i][j];
        7. Function Passing
        void fun(int arr[], int n);
        8. Dynamic Array
        int *a = new int[n];
        delete[] a;
        9. Limitations
        Fixed size
        No bounds checking
    */
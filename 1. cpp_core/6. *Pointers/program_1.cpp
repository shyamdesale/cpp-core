/*  Pointers in C++ :

        Pointer = variable that stores a memory address, not a value.
        Declared using * → int *p;.
        Use & to store address → p = &a;.
        Use * to access value at that address → *p.
        Pointer size is fixed (8 bytes on 64-bit).
        nullptr = pointer pointing to nothing.
        Pointer arithmetic moves by datatype size (p+1).
        Arrays decay to pointers (arr = address of arr[0]).
        new / delete work with pointers for dynamic memory.
        Dangling pointer = pointer to deleted/freed memory → dangerous.
*/
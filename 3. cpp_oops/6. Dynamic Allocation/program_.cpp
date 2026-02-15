/*  Dynamic Allocation —

        Memory is allocated at runtime, not at compile time.
        Used when you don’t know the required size in advance.
        Allocated memory comes from the heap, not the stack.
        In C++, you use new to allocate and delete to free memory.
        You get a pointer that refers to the allocated memory.
        If you forget delete, you create a memory leak.
        Dynamic memory stays alive until you manually free it, not tied to scope.
        Used for arrays, objects, linked lists, trees, etc.
        More flexible than static allocation but more dangerous if misused.
*/
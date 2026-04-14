/*  Class Function (Member Function) :

        1). Function written inside a class.
        2). Accesses class data using this pointer.
        3). Called using object: obj.func().
        4). Can be public / private / protected.
        5). Used to read/update object data.

    Passing Object to Function -
        1. Pass by Value
        Copy of object is passed.
        Changes do NOT affect original.
        Slower (object copy).

        2. Pass by Reference
        Function gets original object.
        Changes affect original.
        Fast, no copying.
        Syntax: func(obj); with parameter ClassName &obj.

        3. Pass by Pointer
        Address of object passed.
        Access with ->.
        Changes affect original.
        Useful with dynamic objects & polymorphism.
*/
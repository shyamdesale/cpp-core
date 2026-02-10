/*  Object Pointer :

        1). Pointer stores the address of an object, not the object itself.
            ClassName *ptr = &obj;

        2). You access members using -> instead of .
            ptr->data; is same as obj.data;

        3). Useful when object size is large
            Passing pointers avoids copying heavy objects → faster.

        4). Dynamic object creation uses pointers
            ClassName *ptr = new ClassName();
            Creates object at runtime (heap).

        5). Must delete dynamically created objects
            delete ptr; → Otherwise memory leak.

        6). Pointer can be NULL / nullptr
            Always check before using: if(ptr != nullptr)

        7). Allows polymorphism (most important)
            Base class pointer can point to child object:
            Base *b = new Derived();

        8). Needed for arrays of objects (dynamic)
            ClassName *arr = new ClassName[10];

        9). Accessing array objects through pointer
            (arr + i)->data;

        10). this pointer is an internal object pointer
            Inside class, this points to current object.
*/
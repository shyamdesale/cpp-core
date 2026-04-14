/*  1. `begin()`
    What it returns
        Iterator to the **first element** of a container.
    Syntax
        container.begin();
    Example
        vector<int> v = {10,20,30};
        auto it = v.begin();
        cout << *it;   // 10
    Loop usage
        for(auto it = v.begin(); it != v.end(); ++it)
        {
            cout << *it;
        }
    Key facts
        * Points to first element
        * Dereference allowed: `*it`
        * Works for all containers

    2. end()
    What it returns
        Iterator **after the last element**
        (not last element itself)
        This is critical.
    Syntax
        container.end();
    Example
        auto it = v.end();
        --it;
        cout << *it;   // last element
    Loop condition
        for(auto it = v.begin(); it != v.end(); ++it)
    You loop **until end**, not including it.

    3. rbegin()
    What it returns
        Reverse iterator to the **last element**
    Syntax
        container.rbegin();
    Example
        vector<int> v = {10,20,30};
        auto it = v.rbegin();
        cout << *it;   // 30
    Reverse loop
        for(auto it = v.rbegin(); it != v.rend(); ++it)
        {
            cout << *it;
        }
    Output:
        30 20 10
    Important
        `rbegin()` starts from last element.

    4. `rend()`
    What it returns
        Reverse iterator **before first element**
        Same idea as `end()` but reversed.
        You cannot dereference it.

        auto it = v.rend();
        *it;   // WRONG

    Used only for loop condition:
        for(auto it = v.rbegin(); it != v.rend(); ++it)
*/
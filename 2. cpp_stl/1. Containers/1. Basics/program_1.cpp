#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Hello World";
}


/*
# `<bits/stdc++.h>` — interview-focused notes

# What it is
    * A non-standard header** used mainly in competitive programming.
    * Internally includes almost all C++ standard library headers** in one shot.
    * Saves typing during contests.

# Key point
    It is **not part of the C++ standard**.
    Only works with GCC (Linux/Codeforces)** environments.

# Why it exists
Instead of writing:

    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <map>
    #include <set>
    #include <queue>

You write:
    #include <bits/stdc++.h>

It includes everything at once.

# Advantages
    * Fast to write during contests
    * No need to remember headers
    * Useful in competitive programming

# Disadvantages (interview-important)
    1. Not standard C++
    → Not portable across compilers.
    2. Slower compilation
    → Includes hundreds of unnecessary headers.
    3. Bad practice in real projects
    → Professional code includes only required headers.
    4. Fails on Mac/Windows default compilers
    → Common beginner error.

# When to use
Use it only in:
    * Competitive programming
    * Coding contests
    * Quick practice

Never use it in:
    * Interviews
    * Production code
    * College exams (unless allowed)
*/
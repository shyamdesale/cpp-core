/*  Array Traversal Using Iterators (begin() 7 end()) in C++ STL */

#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto t = arr.begin(); t != arr.end(); t++)
    {
        cout << *t << " ";
    }
}

//  Output : 1 3 5 7 9

// #include<iostream>
// #include<array>          // add this
// using namespace std;

// int main ()
// {
//     array<int , 5> arr = {1 , 3 , 5 , 7};

//     // iterator loop fix
//     for(auto it = arr.begin(); it != arr.end(); ++it)
//     {
//         cout << *it << " ";
//     }
// }

// //  Output : 1 3 5 7 0
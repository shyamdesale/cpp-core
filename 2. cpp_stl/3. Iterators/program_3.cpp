/*  Reverse Traversal of std::array Using rbegin() and rend() Iterators in C++ */

#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }
}

//  Output : 1 3 5 7 9


#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7};

    // iterator loop fix
    for(auto it = arr.rbegin(); it != arr.rend(); ++it)
    {
        cout << *it << " ";
    }
}

//  Output : 1 3 5 7 0
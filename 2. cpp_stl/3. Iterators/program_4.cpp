/*  Array Traversal Using Iterators (begin() 7 end()) in C++ STL */

#include<iostream>
#include<array>          // add this

using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << arr.size() << endl;
    cout << arr.front() << endl;    //  cout << arr.at(0) << endl;
    cout << arr.back() << endl;     //  cout << arr.at(4) << endl;
    
    return 0;
}
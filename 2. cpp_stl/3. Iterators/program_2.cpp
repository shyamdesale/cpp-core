/*  Array Traversal Using Iterators (begin() 7 end()) in C++ STL */

#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto it = arr.begin(); it != arr.end(); it++)
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
    for(auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
}

//  Output : 1 3 5 7 0


#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << arr.size() << endl;
    cout << arr.front() << endl;    //  cout << arr.at(0) << endl;
    cout << arr.back() << endl;     //  cout << arr.at(4) << endl;

    return 0;
}

/*  Output :
    9 7 5 3 1
    5
    1
    9
*/
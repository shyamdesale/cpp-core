#include<iostream>
#include<array>          // add this
using namespace std;

int main ()
{
    array<int , 5> arr = {1 , 3 , 5 , 7 , 9};

    // iterator loop fix
    for(auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
}
// /* Range-Based String Traversal Using STL in C++ */

// #include <iostream>   // for cout
// #include <string>     // for string class
// using namespace std;
// int main ()
// {
//     string s = "abcde";      // string initialize
//     // range-based for loop: iterates over each character of the string
//     for (auto c : s)
//     {
//         cout << c << " ";    // print each character with space
//     }
//     return 0;
// }




#include <iostream>   // for cout
#include <string>     // for string class
using namespace std;
int main ()
{
    string s = "abcde";      // string initialize
    // range-based for loop: iterates over each character of the string
    for (auto c : s)
    {
        cout << c << " ";    // print each character with space
    }
    cout << endl;

    cout << s.size() << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;
    return 0;
}
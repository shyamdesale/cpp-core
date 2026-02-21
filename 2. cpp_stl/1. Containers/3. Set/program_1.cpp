#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Read number of elements to be inserted
    int n;
    cin >> n;

    // Declare a set to store unique integers in sorted order
    set<int> st;

    // Input loop: read each value and insert into the set
    // The set automatically removes duplicates and maintains sorted order
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    // Output all unique elements in ascending order
    for (const auto& value : st)
    {
        cout << value << " ";
    }

    return 0;
}
// Remove elements from end only
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 25, 60, 70, 80};

    // Remove from end while last element > 50
    while (!v.empty() && v.back() > 50) {
        v.pop_back();
    }
    cout << "Vector after removing from end: ";
    for (int x : v)
        cout << x << " ";
}

/*  Output :
    Vector after removing from end: 10 25

    Why it works
        80 removed
        70 removed
        60 removed
        25 → stop
    This is stack behavior
*/



// Remove ALL elements > 50
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 25, 60, 70, 40};

    v.erase(
        remove_if(v.begin(), v.end(),
                  [](int x) { return x > 50; }),
        v.end()
    );
    cout << "Vector after removing all > 50: ";
    for (int x : v)
        cout << x << " ";
}

// Output : Vector after removing all > 50: 10 25 40


// Using vector as stack
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> st;

    st.push_back(5);
    st.push_back(10);
    st.push_back(15);

    cout << "Top: " << st.back() << endl;

    st.pop_back();

    cout << "Top after pop: " << st.back() << endl;
}



// Capacity-aware pushing
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.reserve(100);   // reserve memory

    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
}
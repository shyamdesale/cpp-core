#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Create a stack of integers
    stack<int> st;

    // Insert elements into the stack
    // push() adds element to the top of the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // top() returns the element at the top of the stack
    // Since stack follows LIFO, last inserted element is at the top
    cout << "Top element: " << st.top() << endl;

    return 0;
}

// Top element: 30



#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Create a stack of integers
    stack<int> st;

    // Add elements to stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Display current top element
    cout << "Top element: " << st.top() << endl;

    // pop() removes the top element from the stack
    st.pop();

    // After removing 30, new top becomes 20
    cout << "Top element: " << st.top() << endl;

    // Remove top again
    st.pop();

    // Now the remaining top element is 10
    cout << "Top element: " << st.top() << endl;

    return 0;
}

// Top element: 30
// Top element: 20
// Top element: 10
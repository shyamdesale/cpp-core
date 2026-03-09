#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Create stack (LIFO structure)
    stack<int> st;

    // push elements into stack
    st.push(10);
    st.push(20);
    st.push(30);

    // top() returns the last inserted element
    cout << "Top element: " << st.top() << endl;

    // pop removes top element
    st.pop();

    cout << "Top after pop: " << st.top() << endl;

    // stack size
    cout << "Stack size: " << st.size() << endl;

    return 0;
}

/*
Output
Top element: 30
Top after pop: 20
Stack size: 2
*/
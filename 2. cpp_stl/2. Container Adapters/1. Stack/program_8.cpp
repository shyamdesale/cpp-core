#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    // remove all elements
    while(!st.empty()) {
        st.pop();
    }

    cout << "Stack size after deleting all elements: " << st.size();

    return 0;
}

// Stack size after deleting all elements: 0
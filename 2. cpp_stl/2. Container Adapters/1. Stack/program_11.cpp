// Check if Stack is Empty (empty())

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);

    // empty() returns true if stack is empty
    bool flag = st.empty();

    if(flag)
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;
}
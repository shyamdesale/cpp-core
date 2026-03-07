// Delete Entire Stack Using while(!empty())

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    // remove all elements from stack
    while(!st.empty()) {
        st.pop();
    }

    cout << "Stack size after deleting: " << st.size();

    return 0;
}
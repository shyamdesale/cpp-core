#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    while(!st.empty()) {
        st.pop();
        cout << "Current size: " << st.size() << endl;
    }

    return 0;
}

/*
Current size: 2
Current size: 1
Current size: 0
*/
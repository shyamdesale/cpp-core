#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    if(st.empty()) {
        cout << "Stack is empty";
    } else {
        cout << "Stack is not empty";
    }

    return 0;
}



#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(50);

    if(!st.empty()) {
        cout << "Top element: " << st.top();
    } else {
        cout << "Stack is empty";
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    // push elements
    st.push(10);
    st.push(20);

    // emplace element
    st.emplace(30);

    cout << "Top element: " << st.top() << endl;

    cout << "Stack size: " << st.size() << endl;

    if(st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    // pop element
    st.pop();

    cout << "Top after pop: " << st.top() << endl;

    cout << "Stack elements (LIFO order): ";

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
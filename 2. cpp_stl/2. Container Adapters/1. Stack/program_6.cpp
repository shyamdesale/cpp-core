#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(100);
    st.push(200);

    cout << "Top element: " << st.top();

}